#!/bin/bash

# Default configuration file
setup="standalone.cfg"

# Allowed host
trig_host="crilindaq-gargiulo"

# PadmeTrig executable to use
exe_file="./PadmeTrig.exe"

# Log file
log_file="trigger_enable.log"

# Start trigger tag file
start_file="start_trig"

# Check if we are running on the designed host
host=$( echo $HOSTNAME | grep $trig_host )
if [ -z "$host" ]
then
    echo "ERROR: this program only runs on $trig_host"
    exit 1
fi

# Check if another PadmeTrig process is running on this node
#active=$( ps -fu daq | grep $exe_file | grep -v grep )
active=$( ps -ef | grep $exe_file | grep -v grep )
if [ ! -z "$active" ]; then
    echo "WARNING: another PadmeTrig process is running (see next line). Stop it and try again."
    echo $active
    exit 0
fi

# Check if user provided an alternative setup for the trigger
if [ $# -eq 1 ]
then
    setup=$1
fi

# Check if required setup exists
if [ ! -f $setup ]
then
    echo "ERROR: file $setup does not exist"
    exit 1
fi

# All is clear: start the trigger
echo "Starting trigger executable $exe_file using setup $setup and saving output to $log_file"
nohup $exe_file -c $setup > $log_file 2>&1 </dev/zero &

# Wait for trigger to initialize, then start it
echo -n "Waiting for trigger board to initialize"
n=0
while [ $n -lt 5 ]
do
    echo -n "."
    sleep 2
    ll=$( tail -n 1 $log_file )
    if [[ "$ll" == "- Trigger board initialized: waiting for start_file 'start_trig'" ]]
    then
	# Trigger is ready: start it
	echo
	echo "Trigger board initialized: enabling triggers"
	touch $start_file
	sleep 2
	rm $start_file
	exit 0
    fi
    n=$(( $n + 1 ))
done
echo
echo "ERROR: trigger is not initializing. Check log file $log_file"
exit 1
