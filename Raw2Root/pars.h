#pragma once

const int NPed = 100;
static const int NAvg = 1000;

const double DigThre = 950; //mV digitizer saturation threshold
const double FEEThre = 1000; //mV, FEE saturation
const double fImpedance = 50.;
  
const double digiTime = 0.2; // Sampled at 5 GS/s  ---> da prendere dalla rootupla
const double fTimeBin = digiTime*1e-9;

const int NChannels = 32; 


const double CFvalue = 0.11;
const double FixThre = 10.;

const double StopThre = 300.; //trigger
const double StartThre = 20.; //trigger
	   
