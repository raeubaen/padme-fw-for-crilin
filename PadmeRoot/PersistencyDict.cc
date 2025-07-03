// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PersistencyDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "include/TADCBoard.hh"
#include "include/TADCChannel.hh"
#include "include/TADCTrigger.hh"
#include "include/TDetectorInfo.hh"
#include "include/TECalClusCollection.hh"
#include "include/TECalMCDigi.hh"
#include "include/TECalMCEvent.hh"
#include "include/TECalMCHit.hh"
#include "include/TECalRecoEvent.hh"
#include "include/TETagClusCollection.hh"
#include "include/TETagMCDigi.hh"
#include "include/TETagMCEvent.hh"
#include "include/TETagMCHit.hh"
#include "include/TETagRecoEvent.hh"
#include "include/TEVetoClusCollection.hh"
#include "include/TEVetoMCDigi.hh"
#include "include/TEVetoMCEvent.hh"
#include "include/TEVetoMCHit.hh"
#include "include/TEVetoRecoEvent.hh"
#include "include/THEPVetoClusCollection.hh"
#include "include/THEPVetoMCDigi.hh"
#include "include/THEPVetoMCEvent.hh"
#include "include/THEPVetoMCHit.hh"
#include "include/THEPVetoRecoEvent.hh"
#include "include/TLeadGlassMCDigi.hh"
#include "include/TLeadGlassMCEvent.hh"
#include "include/TLeadGlassMCHit.hh"
#include "include/TLeadGlassRecoEvent.hh"
#include "include/TMCEvent.hh"
#include "include/TMCParticle.hh"
#include "include/TMCTruthEvent.hh"
#include "include/TMCVDigi.hh"
#include "include/TMCVertex.hh"
#include "include/TMCVEvent.hh"
#include "include/TMCVHit.hh"
#include "include/TMMBoard.hh"
#include "include/TMMChannel.hh"
#include "include/TMMClusCollection.hh"
#include "include/TMMInfo.hh"
#include "include/TMMMCDigi.hh"
#include "include/TMMMCEvent.hh"
#include "include/TMMMCHit.hh"
#include "include/TMMRawEvent.hh"
#include "include/TMMRecoEvent.hh"
#include "include/TPadmeRun.hh"
#include "include/TPVetoClusCollection.hh"
#include "include/TPVetoMCDigi.hh"
#include "include/TPVetoMCEvent.hh"
#include "include/TPVetoMCHit.hh"
#include "include/TPVetoRecoEvent.hh"
#include "include/TRawEvent.hh"
#include "include/TRawMergedEvent.hh"
#include "include/TRecoEvent.hh"
#include "include/TRecoVClusCollection.hh"
#include "include/TRecoVCluster.hh"
#include "include/TRecoVHit.hh"
#include "include/TRecoVObject.hh"
#include "include/TSACClusCollection.hh"
#include "include/TSACMCDigi.hh"
#include "include/TSACMCEvent.hh"
#include "include/TSACMCHit.hh"
#include "include/TSACRecoEvent.hh"
#include "include/TSubDetectorInfo.hh"
#include "include/TTargetFitEvent.hh"
#include "include/TTargetMCDigi.hh"
#include "include/TTargetMCEvent.hh"
#include "include/TTargetMCHit.hh"
#include "include/TTargetRecoBeam.hh"
#include "include/TTargetRecoEvent.hh"
#include "include/TTargetSignalFitParams.hh"
#include "include/TTPixMCDigi.hh"
#include "include/TTPixMCEvent.hh"
#include "include/TTPixMCHit.hh"
#include "include/TTriggerInfo.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TADCChannel(void *p = nullptr);
   static void *newArray_TADCChannel(Long_t size, void *p);
   static void delete_TADCChannel(void *p);
   static void deleteArray_TADCChannel(void *p);
   static void destruct_TADCChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TADCChannel*)
   {
      ::TADCChannel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TADCChannel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TADCChannel", ::TADCChannel::Class_Version(), "TADCChannel.hh", 8,
                  typeid(::TADCChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TADCChannel::Dictionary, isa_proxy, 4,
                  sizeof(::TADCChannel) );
      instance.SetNew(&new_TADCChannel);
      instance.SetNewArray(&newArray_TADCChannel);
      instance.SetDelete(&delete_TADCChannel);
      instance.SetDeleteArray(&deleteArray_TADCChannel);
      instance.SetDestructor(&destruct_TADCChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TADCChannel*)
   {
      return GenerateInitInstanceLocal(static_cast<::TADCChannel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TADCChannel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TADCTrigger(void *p = nullptr);
   static void *newArray_TADCTrigger(Long_t size, void *p);
   static void delete_TADCTrigger(void *p);
   static void deleteArray_TADCTrigger(void *p);
   static void destruct_TADCTrigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TADCTrigger*)
   {
      ::TADCTrigger *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TADCTrigger >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TADCTrigger", ::TADCTrigger::Class_Version(), "TADCTrigger.hh", 8,
                  typeid(::TADCTrigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TADCTrigger::Dictionary, isa_proxy, 4,
                  sizeof(::TADCTrigger) );
      instance.SetNew(&new_TADCTrigger);
      instance.SetNewArray(&newArray_TADCTrigger);
      instance.SetDelete(&delete_TADCTrigger);
      instance.SetDeleteArray(&deleteArray_TADCTrigger);
      instance.SetDestructor(&destruct_TADCTrigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TADCTrigger*)
   {
      return GenerateInitInstanceLocal(static_cast<::TADCTrigger*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TADCTrigger*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TADCBoard(void *p = nullptr);
   static void *newArray_TADCBoard(Long_t size, void *p);
   static void delete_TADCBoard(void *p);
   static void deleteArray_TADCBoard(void *p);
   static void destruct_TADCBoard(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TADCBoard*)
   {
      ::TADCBoard *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TADCBoard >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TADCBoard", ::TADCBoard::Class_Version(), "TADCBoard.hh", 13,
                  typeid(::TADCBoard), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TADCBoard::Dictionary, isa_proxy, 4,
                  sizeof(::TADCBoard) );
      instance.SetNew(&new_TADCBoard);
      instance.SetNewArray(&newArray_TADCBoard);
      instance.SetDelete(&delete_TADCBoard);
      instance.SetDeleteArray(&deleteArray_TADCBoard);
      instance.SetDestructor(&destruct_TADCBoard);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TADCBoard*)
   {
      return GenerateInitInstanceLocal(static_cast<::TADCBoard*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TADCBoard*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSubDetectorInfo(void *p = nullptr);
   static void *newArray_TSubDetectorInfo(Long_t size, void *p);
   static void delete_TSubDetectorInfo(void *p);
   static void deleteArray_TSubDetectorInfo(void *p);
   static void destruct_TSubDetectorInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSubDetectorInfo*)
   {
      ::TSubDetectorInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSubDetectorInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSubDetectorInfo", ::TSubDetectorInfo::Class_Version(), "TSubDetectorInfo.hh", 13,
                  typeid(::TSubDetectorInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSubDetectorInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TSubDetectorInfo) );
      instance.SetNew(&new_TSubDetectorInfo);
      instance.SetNewArray(&newArray_TSubDetectorInfo);
      instance.SetDelete(&delete_TSubDetectorInfo);
      instance.SetDeleteArray(&deleteArray_TSubDetectorInfo);
      instance.SetDestructor(&destruct_TSubDetectorInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSubDetectorInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSubDetectorInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSubDetectorInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDetectorInfo(void *p = nullptr);
   static void *newArray_TDetectorInfo(Long_t size, void *p);
   static void delete_TDetectorInfo(void *p);
   static void deleteArray_TDetectorInfo(void *p);
   static void destruct_TDetectorInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDetectorInfo*)
   {
      ::TDetectorInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDetectorInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDetectorInfo", ::TDetectorInfo::Class_Version(), "TDetectorInfo.hh", 13,
                  typeid(::TDetectorInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDetectorInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TDetectorInfo) );
      instance.SetNew(&new_TDetectorInfo);
      instance.SetNewArray(&newArray_TDetectorInfo);
      instance.SetDelete(&delete_TDetectorInfo);
      instance.SetDeleteArray(&deleteArray_TDetectorInfo);
      instance.SetDestructor(&destruct_TDetectorInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDetectorInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDetectorInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDetectorInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMCVHit(void *p = nullptr);
   static void *newArray_TMCVHit(Long_t size, void *p);
   static void delete_TMCVHit(void *p);
   static void deleteArray_TMCVHit(void *p);
   static void destruct_TMCVHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCVHit*)
   {
      ::TMCVHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCVHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCVHit", ::TMCVHit::Class_Version(), "TMCVHit.hh", 13,
                  typeid(::TMCVHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCVHit::Dictionary, isa_proxy, 4,
                  sizeof(::TMCVHit) );
      instance.SetNew(&new_TMCVHit);
      instance.SetNewArray(&newArray_TMCVHit);
      instance.SetDelete(&delete_TMCVHit);
      instance.SetDeleteArray(&deleteArray_TMCVHit);
      instance.SetDestructor(&destruct_TMCVHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCVHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCVHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCVHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRecoVCluster(void *p = nullptr);
   static void *newArray_TRecoVCluster(Long_t size, void *p);
   static void delete_TRecoVCluster(void *p);
   static void deleteArray_TRecoVCluster(void *p);
   static void destruct_TRecoVCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecoVCluster*)
   {
      ::TRecoVCluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecoVCluster >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecoVCluster", ::TRecoVCluster::Class_Version(), "TRecoVCluster.hh", 10,
                  typeid(::TRecoVCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecoVCluster::Dictionary, isa_proxy, 4,
                  sizeof(::TRecoVCluster) );
      instance.SetNew(&new_TRecoVCluster);
      instance.SetNewArray(&newArray_TRecoVCluster);
      instance.SetDelete(&delete_TRecoVCluster);
      instance.SetDeleteArray(&deleteArray_TRecoVCluster);
      instance.SetDestructor(&destruct_TRecoVCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecoVCluster*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecoVCluster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecoVCluster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRecoVClusCollection(void *p = nullptr);
   static void *newArray_TRecoVClusCollection(Long_t size, void *p);
   static void delete_TRecoVClusCollection(void *p);
   static void deleteArray_TRecoVClusCollection(void *p);
   static void destruct_TRecoVClusCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecoVClusCollection*)
   {
      ::TRecoVClusCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecoVClusCollection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecoVClusCollection", ::TRecoVClusCollection::Class_Version(), "TRecoVClusCollection.hh", 11,
                  typeid(::TRecoVClusCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecoVClusCollection::Dictionary, isa_proxy, 4,
                  sizeof(::TRecoVClusCollection) );
      instance.SetNew(&new_TRecoVClusCollection);
      instance.SetNewArray(&newArray_TRecoVClusCollection);
      instance.SetDelete(&delete_TRecoVClusCollection);
      instance.SetDeleteArray(&deleteArray_TRecoVClusCollection);
      instance.SetDestructor(&destruct_TRecoVClusCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecoVClusCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecoVClusCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecoVClusCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TECalClusCollection(void *p = nullptr);
   static void *newArray_TECalClusCollection(Long_t size, void *p);
   static void delete_TECalClusCollection(void *p);
   static void deleteArray_TECalClusCollection(void *p);
   static void destruct_TECalClusCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TECalClusCollection*)
   {
      ::TECalClusCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TECalClusCollection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TECalClusCollection", ::TECalClusCollection::Class_Version(), "TECalClusCollection.hh", 6,
                  typeid(::TECalClusCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TECalClusCollection::Dictionary, isa_proxy, 4,
                  sizeof(::TECalClusCollection) );
      instance.SetNew(&new_TECalClusCollection);
      instance.SetNewArray(&newArray_TECalClusCollection);
      instance.SetDelete(&delete_TECalClusCollection);
      instance.SetDeleteArray(&deleteArray_TECalClusCollection);
      instance.SetDestructor(&destruct_TECalClusCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TECalClusCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TECalClusCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TECalClusCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMCVDigi(void *p = nullptr);
   static void *newArray_TMCVDigi(Long_t size, void *p);
   static void delete_TMCVDigi(void *p);
   static void deleteArray_TMCVDigi(void *p);
   static void destruct_TMCVDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCVDigi*)
   {
      ::TMCVDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCVDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCVDigi", ::TMCVDigi::Class_Version(), "TMCVDigi.hh", 12,
                  typeid(::TMCVDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCVDigi::Dictionary, isa_proxy, 4,
                  sizeof(::TMCVDigi) );
      instance.SetNew(&new_TMCVDigi);
      instance.SetNewArray(&newArray_TMCVDigi);
      instance.SetDelete(&delete_TMCVDigi);
      instance.SetDeleteArray(&deleteArray_TMCVDigi);
      instance.SetDestructor(&destruct_TMCVDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCVDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCVDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCVDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TECalMCDigi(void *p = nullptr);
   static void *newArray_TECalMCDigi(Long_t size, void *p);
   static void delete_TECalMCDigi(void *p);
   static void deleteArray_TECalMCDigi(void *p);
   static void destruct_TECalMCDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TECalMCDigi*)
   {
      ::TECalMCDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TECalMCDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TECalMCDigi", ::TECalMCDigi::Class_Version(), "TECalMCDigi.hh", 12,
                  typeid(::TECalMCDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TECalMCDigi::Dictionary, isa_proxy, 4,
                  sizeof(::TECalMCDigi) );
      instance.SetNew(&new_TECalMCDigi);
      instance.SetNewArray(&newArray_TECalMCDigi);
      instance.SetDelete(&delete_TECalMCDigi);
      instance.SetDeleteArray(&deleteArray_TECalMCDigi);
      instance.SetDestructor(&destruct_TECalMCDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TECalMCDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TECalMCDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TECalMCDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMCVEvent(void *p = nullptr);
   static void *newArray_TMCVEvent(Long_t size, void *p);
   static void delete_TMCVEvent(void *p);
   static void deleteArray_TMCVEvent(void *p);
   static void destruct_TMCVEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCVEvent*)
   {
      ::TMCVEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCVEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCVEvent", ::TMCVEvent::Class_Version(), "TMCVEvent.hh", 19,
                  typeid(::TMCVEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCVEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TMCVEvent) );
      instance.SetNew(&new_TMCVEvent);
      instance.SetNewArray(&newArray_TMCVEvent);
      instance.SetDelete(&delete_TMCVEvent);
      instance.SetDeleteArray(&deleteArray_TMCVEvent);
      instance.SetDestructor(&destruct_TMCVEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCVEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCVEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCVEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TECalMCEvent(void *p = nullptr);
   static void *newArray_TECalMCEvent(Long_t size, void *p);
   static void delete_TECalMCEvent(void *p);
   static void deleteArray_TECalMCEvent(void *p);
   static void destruct_TECalMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TECalMCEvent*)
   {
      ::TECalMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TECalMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TECalMCEvent", ::TECalMCEvent::Class_Version(), "TECalMCEvent.hh", 12,
                  typeid(::TECalMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TECalMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TECalMCEvent) );
      instance.SetNew(&new_TECalMCEvent);
      instance.SetNewArray(&newArray_TECalMCEvent);
      instance.SetDelete(&delete_TECalMCEvent);
      instance.SetDeleteArray(&deleteArray_TECalMCEvent);
      instance.SetDestructor(&destruct_TECalMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TECalMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TECalMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TECalMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TECalMCHit(void *p = nullptr);
   static void *newArray_TECalMCHit(Long_t size, void *p);
   static void delete_TECalMCHit(void *p);
   static void deleteArray_TECalMCHit(void *p);
   static void destruct_TECalMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TECalMCHit*)
   {
      ::TECalMCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TECalMCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TECalMCHit", ::TECalMCHit::Class_Version(), "TECalMCHit.hh", 12,
                  typeid(::TECalMCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TECalMCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TECalMCHit) );
      instance.SetNew(&new_TECalMCHit);
      instance.SetNewArray(&newArray_TECalMCHit);
      instance.SetDelete(&delete_TECalMCHit);
      instance.SetDeleteArray(&deleteArray_TECalMCHit);
      instance.SetDestructor(&destruct_TECalMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TECalMCHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TECalMCHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TECalMCHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRecoVHit(void *p = nullptr);
   static void *newArray_TRecoVHit(Long_t size, void *p);
   static void delete_TRecoVHit(void *p);
   static void deleteArray_TRecoVHit(void *p);
   static void destruct_TRecoVHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecoVHit*)
   {
      ::TRecoVHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecoVHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecoVHit", ::TRecoVHit::Class_Version(), "TRecoVHit.hh", 11,
                  typeid(::TRecoVHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecoVHit::Dictionary, isa_proxy, 4,
                  sizeof(::TRecoVHit) );
      instance.SetNew(&new_TRecoVHit);
      instance.SetNewArray(&newArray_TRecoVHit);
      instance.SetDelete(&delete_TRecoVHit);
      instance.SetDeleteArray(&deleteArray_TRecoVHit);
      instance.SetDestructor(&destruct_TRecoVHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecoVHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecoVHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecoVHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRecoVObject(void *p = nullptr);
   static void *newArray_TRecoVObject(Long_t size, void *p);
   static void delete_TRecoVObject(void *p);
   static void deleteArray_TRecoVObject(void *p);
   static void destruct_TRecoVObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecoVObject*)
   {
      ::TRecoVObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecoVObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecoVObject", ::TRecoVObject::Class_Version(), "TRecoVObject.hh", 9,
                  typeid(::TRecoVObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecoVObject::Dictionary, isa_proxy, 4,
                  sizeof(::TRecoVObject) );
      instance.SetNew(&new_TRecoVObject);
      instance.SetNewArray(&newArray_TRecoVObject);
      instance.SetDelete(&delete_TRecoVObject);
      instance.SetDeleteArray(&deleteArray_TRecoVObject);
      instance.SetDestructor(&destruct_TRecoVObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecoVObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecoVObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecoVObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TECalRecoEvent(void *p = nullptr);
   static void *newArray_TECalRecoEvent(Long_t size, void *p);
   static void delete_TECalRecoEvent(void *p);
   static void deleteArray_TECalRecoEvent(void *p);
   static void destruct_TECalRecoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TECalRecoEvent*)
   {
      ::TECalRecoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TECalRecoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TECalRecoEvent", ::TECalRecoEvent::Class_Version(), "TECalRecoEvent.hh", 6,
                  typeid(::TECalRecoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TECalRecoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TECalRecoEvent) );
      instance.SetNew(&new_TECalRecoEvent);
      instance.SetNewArray(&newArray_TECalRecoEvent);
      instance.SetDelete(&delete_TECalRecoEvent);
      instance.SetDeleteArray(&deleteArray_TECalRecoEvent);
      instance.SetDestructor(&destruct_TECalRecoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TECalRecoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TECalRecoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TECalRecoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TETagClusCollection(void *p = nullptr);
   static void *newArray_TETagClusCollection(Long_t size, void *p);
   static void delete_TETagClusCollection(void *p);
   static void deleteArray_TETagClusCollection(void *p);
   static void destruct_TETagClusCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TETagClusCollection*)
   {
      ::TETagClusCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TETagClusCollection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TETagClusCollection", ::TETagClusCollection::Class_Version(), "TETagClusCollection.hh", 6,
                  typeid(::TETagClusCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TETagClusCollection::Dictionary, isa_proxy, 4,
                  sizeof(::TETagClusCollection) );
      instance.SetNew(&new_TETagClusCollection);
      instance.SetNewArray(&newArray_TETagClusCollection);
      instance.SetDelete(&delete_TETagClusCollection);
      instance.SetDeleteArray(&deleteArray_TETagClusCollection);
      instance.SetDestructor(&destruct_TETagClusCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TETagClusCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TETagClusCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TETagClusCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TETagMCDigi(void *p = nullptr);
   static void *newArray_TETagMCDigi(Long_t size, void *p);
   static void delete_TETagMCDigi(void *p);
   static void deleteArray_TETagMCDigi(void *p);
   static void destruct_TETagMCDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TETagMCDigi*)
   {
      ::TETagMCDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TETagMCDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TETagMCDigi", ::TETagMCDigi::Class_Version(), "TETagMCDigi.hh", 12,
                  typeid(::TETagMCDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TETagMCDigi::Dictionary, isa_proxy, 4,
                  sizeof(::TETagMCDigi) );
      instance.SetNew(&new_TETagMCDigi);
      instance.SetNewArray(&newArray_TETagMCDigi);
      instance.SetDelete(&delete_TETagMCDigi);
      instance.SetDeleteArray(&deleteArray_TETagMCDigi);
      instance.SetDestructor(&destruct_TETagMCDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TETagMCDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TETagMCDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TETagMCDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TETagMCEvent(void *p = nullptr);
   static void *newArray_TETagMCEvent(Long_t size, void *p);
   static void delete_TETagMCEvent(void *p);
   static void deleteArray_TETagMCEvent(void *p);
   static void destruct_TETagMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TETagMCEvent*)
   {
      ::TETagMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TETagMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TETagMCEvent", ::TETagMCEvent::Class_Version(), "TETagMCEvent.hh", 12,
                  typeid(::TETagMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TETagMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TETagMCEvent) );
      instance.SetNew(&new_TETagMCEvent);
      instance.SetNewArray(&newArray_TETagMCEvent);
      instance.SetDelete(&delete_TETagMCEvent);
      instance.SetDeleteArray(&deleteArray_TETagMCEvent);
      instance.SetDestructor(&destruct_TETagMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TETagMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TETagMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TETagMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TETagMCHit(void *p = nullptr);
   static void *newArray_TETagMCHit(Long_t size, void *p);
   static void delete_TETagMCHit(void *p);
   static void deleteArray_TETagMCHit(void *p);
   static void destruct_TETagMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TETagMCHit*)
   {
      ::TETagMCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TETagMCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TETagMCHit", ::TETagMCHit::Class_Version(), "TETagMCHit.hh", 12,
                  typeid(::TETagMCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TETagMCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TETagMCHit) );
      instance.SetNew(&new_TETagMCHit);
      instance.SetNewArray(&newArray_TETagMCHit);
      instance.SetDelete(&delete_TETagMCHit);
      instance.SetDeleteArray(&deleteArray_TETagMCHit);
      instance.SetDestructor(&destruct_TETagMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TETagMCHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TETagMCHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TETagMCHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TETagRecoEvent(void *p = nullptr);
   static void *newArray_TETagRecoEvent(Long_t size, void *p);
   static void delete_TETagRecoEvent(void *p);
   static void deleteArray_TETagRecoEvent(void *p);
   static void destruct_TETagRecoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TETagRecoEvent*)
   {
      ::TETagRecoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TETagRecoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TETagRecoEvent", ::TETagRecoEvent::Class_Version(), "TETagRecoEvent.hh", 6,
                  typeid(::TETagRecoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TETagRecoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TETagRecoEvent) );
      instance.SetNew(&new_TETagRecoEvent);
      instance.SetNewArray(&newArray_TETagRecoEvent);
      instance.SetDelete(&delete_TETagRecoEvent);
      instance.SetDeleteArray(&deleteArray_TETagRecoEvent);
      instance.SetDestructor(&destruct_TETagRecoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TETagRecoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TETagRecoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TETagRecoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEVetoClusCollection(void *p = nullptr);
   static void *newArray_TEVetoClusCollection(Long_t size, void *p);
   static void delete_TEVetoClusCollection(void *p);
   static void deleteArray_TEVetoClusCollection(void *p);
   static void destruct_TEVetoClusCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEVetoClusCollection*)
   {
      ::TEVetoClusCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEVetoClusCollection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEVetoClusCollection", ::TEVetoClusCollection::Class_Version(), "TEVetoClusCollection.hh", 6,
                  typeid(::TEVetoClusCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEVetoClusCollection::Dictionary, isa_proxy, 4,
                  sizeof(::TEVetoClusCollection) );
      instance.SetNew(&new_TEVetoClusCollection);
      instance.SetNewArray(&newArray_TEVetoClusCollection);
      instance.SetDelete(&delete_TEVetoClusCollection);
      instance.SetDeleteArray(&deleteArray_TEVetoClusCollection);
      instance.SetDestructor(&destruct_TEVetoClusCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEVetoClusCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEVetoClusCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEVetoClusCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEVetoMCDigi(void *p = nullptr);
   static void *newArray_TEVetoMCDigi(Long_t size, void *p);
   static void delete_TEVetoMCDigi(void *p);
   static void deleteArray_TEVetoMCDigi(void *p);
   static void destruct_TEVetoMCDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEVetoMCDigi*)
   {
      ::TEVetoMCDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEVetoMCDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEVetoMCDigi", ::TEVetoMCDigi::Class_Version(), "TEVetoMCDigi.hh", 12,
                  typeid(::TEVetoMCDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEVetoMCDigi::Dictionary, isa_proxy, 4,
                  sizeof(::TEVetoMCDigi) );
      instance.SetNew(&new_TEVetoMCDigi);
      instance.SetNewArray(&newArray_TEVetoMCDigi);
      instance.SetDelete(&delete_TEVetoMCDigi);
      instance.SetDeleteArray(&deleteArray_TEVetoMCDigi);
      instance.SetDestructor(&destruct_TEVetoMCDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEVetoMCDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEVetoMCDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEVetoMCDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEVetoMCEvent(void *p = nullptr);
   static void *newArray_TEVetoMCEvent(Long_t size, void *p);
   static void delete_TEVetoMCEvent(void *p);
   static void deleteArray_TEVetoMCEvent(void *p);
   static void destruct_TEVetoMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEVetoMCEvent*)
   {
      ::TEVetoMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEVetoMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEVetoMCEvent", ::TEVetoMCEvent::Class_Version(), "TEVetoMCEvent.hh", 12,
                  typeid(::TEVetoMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEVetoMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TEVetoMCEvent) );
      instance.SetNew(&new_TEVetoMCEvent);
      instance.SetNewArray(&newArray_TEVetoMCEvent);
      instance.SetDelete(&delete_TEVetoMCEvent);
      instance.SetDeleteArray(&deleteArray_TEVetoMCEvent);
      instance.SetDestructor(&destruct_TEVetoMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEVetoMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEVetoMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEVetoMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEVetoMCHit(void *p = nullptr);
   static void *newArray_TEVetoMCHit(Long_t size, void *p);
   static void delete_TEVetoMCHit(void *p);
   static void deleteArray_TEVetoMCHit(void *p);
   static void destruct_TEVetoMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEVetoMCHit*)
   {
      ::TEVetoMCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEVetoMCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEVetoMCHit", ::TEVetoMCHit::Class_Version(), "TEVetoMCHit.hh", 12,
                  typeid(::TEVetoMCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEVetoMCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TEVetoMCHit) );
      instance.SetNew(&new_TEVetoMCHit);
      instance.SetNewArray(&newArray_TEVetoMCHit);
      instance.SetDelete(&delete_TEVetoMCHit);
      instance.SetDeleteArray(&deleteArray_TEVetoMCHit);
      instance.SetDestructor(&destruct_TEVetoMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEVetoMCHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEVetoMCHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEVetoMCHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEVetoRecoEvent(void *p = nullptr);
   static void *newArray_TEVetoRecoEvent(Long_t size, void *p);
   static void delete_TEVetoRecoEvent(void *p);
   static void deleteArray_TEVetoRecoEvent(void *p);
   static void destruct_TEVetoRecoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEVetoRecoEvent*)
   {
      ::TEVetoRecoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEVetoRecoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEVetoRecoEvent", ::TEVetoRecoEvent::Class_Version(), "TEVetoRecoEvent.hh", 6,
                  typeid(::TEVetoRecoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEVetoRecoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TEVetoRecoEvent) );
      instance.SetNew(&new_TEVetoRecoEvent);
      instance.SetNewArray(&newArray_TEVetoRecoEvent);
      instance.SetDelete(&delete_TEVetoRecoEvent);
      instance.SetDeleteArray(&deleteArray_TEVetoRecoEvent);
      instance.SetDestructor(&destruct_TEVetoRecoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEVetoRecoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEVetoRecoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEVetoRecoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THEPVetoClusCollection(void *p = nullptr);
   static void *newArray_THEPVetoClusCollection(Long_t size, void *p);
   static void delete_THEPVetoClusCollection(void *p);
   static void deleteArray_THEPVetoClusCollection(void *p);
   static void destruct_THEPVetoClusCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THEPVetoClusCollection*)
   {
      ::THEPVetoClusCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THEPVetoClusCollection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THEPVetoClusCollection", ::THEPVetoClusCollection::Class_Version(), "THEPVetoClusCollection.hh", 6,
                  typeid(::THEPVetoClusCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THEPVetoClusCollection::Dictionary, isa_proxy, 4,
                  sizeof(::THEPVetoClusCollection) );
      instance.SetNew(&new_THEPVetoClusCollection);
      instance.SetNewArray(&newArray_THEPVetoClusCollection);
      instance.SetDelete(&delete_THEPVetoClusCollection);
      instance.SetDeleteArray(&deleteArray_THEPVetoClusCollection);
      instance.SetDestructor(&destruct_THEPVetoClusCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THEPVetoClusCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::THEPVetoClusCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THEPVetoClusCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THEPVetoMCDigi(void *p = nullptr);
   static void *newArray_THEPVetoMCDigi(Long_t size, void *p);
   static void delete_THEPVetoMCDigi(void *p);
   static void deleteArray_THEPVetoMCDigi(void *p);
   static void destruct_THEPVetoMCDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THEPVetoMCDigi*)
   {
      ::THEPVetoMCDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THEPVetoMCDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THEPVetoMCDigi", ::THEPVetoMCDigi::Class_Version(), "THEPVetoMCDigi.hh", 12,
                  typeid(::THEPVetoMCDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THEPVetoMCDigi::Dictionary, isa_proxy, 4,
                  sizeof(::THEPVetoMCDigi) );
      instance.SetNew(&new_THEPVetoMCDigi);
      instance.SetNewArray(&newArray_THEPVetoMCDigi);
      instance.SetDelete(&delete_THEPVetoMCDigi);
      instance.SetDeleteArray(&deleteArray_THEPVetoMCDigi);
      instance.SetDestructor(&destruct_THEPVetoMCDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THEPVetoMCDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::THEPVetoMCDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THEPVetoMCDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THEPVetoMCEvent(void *p = nullptr);
   static void *newArray_THEPVetoMCEvent(Long_t size, void *p);
   static void delete_THEPVetoMCEvent(void *p);
   static void deleteArray_THEPVetoMCEvent(void *p);
   static void destruct_THEPVetoMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THEPVetoMCEvent*)
   {
      ::THEPVetoMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THEPVetoMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THEPVetoMCEvent", ::THEPVetoMCEvent::Class_Version(), "THEPVetoMCEvent.hh", 12,
                  typeid(::THEPVetoMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THEPVetoMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::THEPVetoMCEvent) );
      instance.SetNew(&new_THEPVetoMCEvent);
      instance.SetNewArray(&newArray_THEPVetoMCEvent);
      instance.SetDelete(&delete_THEPVetoMCEvent);
      instance.SetDeleteArray(&deleteArray_THEPVetoMCEvent);
      instance.SetDestructor(&destruct_THEPVetoMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THEPVetoMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::THEPVetoMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THEPVetoMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THEPVetoMCHit(void *p = nullptr);
   static void *newArray_THEPVetoMCHit(Long_t size, void *p);
   static void delete_THEPVetoMCHit(void *p);
   static void deleteArray_THEPVetoMCHit(void *p);
   static void destruct_THEPVetoMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THEPVetoMCHit*)
   {
      ::THEPVetoMCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THEPVetoMCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THEPVetoMCHit", ::THEPVetoMCHit::Class_Version(), "THEPVetoMCHit.hh", 12,
                  typeid(::THEPVetoMCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THEPVetoMCHit::Dictionary, isa_proxy, 4,
                  sizeof(::THEPVetoMCHit) );
      instance.SetNew(&new_THEPVetoMCHit);
      instance.SetNewArray(&newArray_THEPVetoMCHit);
      instance.SetDelete(&delete_THEPVetoMCHit);
      instance.SetDeleteArray(&deleteArray_THEPVetoMCHit);
      instance.SetDestructor(&destruct_THEPVetoMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THEPVetoMCHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::THEPVetoMCHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THEPVetoMCHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THEPVetoRecoEvent(void *p = nullptr);
   static void *newArray_THEPVetoRecoEvent(Long_t size, void *p);
   static void delete_THEPVetoRecoEvent(void *p);
   static void deleteArray_THEPVetoRecoEvent(void *p);
   static void destruct_THEPVetoRecoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THEPVetoRecoEvent*)
   {
      ::THEPVetoRecoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THEPVetoRecoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THEPVetoRecoEvent", ::THEPVetoRecoEvent::Class_Version(), "THEPVetoRecoEvent.hh", 6,
                  typeid(::THEPVetoRecoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THEPVetoRecoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::THEPVetoRecoEvent) );
      instance.SetNew(&new_THEPVetoRecoEvent);
      instance.SetNewArray(&newArray_THEPVetoRecoEvent);
      instance.SetDelete(&delete_THEPVetoRecoEvent);
      instance.SetDeleteArray(&deleteArray_THEPVetoRecoEvent);
      instance.SetDestructor(&destruct_THEPVetoRecoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THEPVetoRecoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::THEPVetoRecoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THEPVetoRecoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeadGlassMCDigi(void *p = nullptr);
   static void *newArray_TLeadGlassMCDigi(Long_t size, void *p);
   static void delete_TLeadGlassMCDigi(void *p);
   static void deleteArray_TLeadGlassMCDigi(void *p);
   static void destruct_TLeadGlassMCDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeadGlassMCDigi*)
   {
      ::TLeadGlassMCDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeadGlassMCDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLeadGlassMCDigi", ::TLeadGlassMCDigi::Class_Version(), "TLeadGlassMCDigi.hh", 14,
                  typeid(::TLeadGlassMCDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeadGlassMCDigi::Dictionary, isa_proxy, 4,
                  sizeof(::TLeadGlassMCDigi) );
      instance.SetNew(&new_TLeadGlassMCDigi);
      instance.SetNewArray(&newArray_TLeadGlassMCDigi);
      instance.SetDelete(&delete_TLeadGlassMCDigi);
      instance.SetDeleteArray(&deleteArray_TLeadGlassMCDigi);
      instance.SetDestructor(&destruct_TLeadGlassMCDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeadGlassMCDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLeadGlassMCDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLeadGlassMCDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeadGlassMCEvent(void *p = nullptr);
   static void *newArray_TLeadGlassMCEvent(Long_t size, void *p);
   static void delete_TLeadGlassMCEvent(void *p);
   static void deleteArray_TLeadGlassMCEvent(void *p);
   static void destruct_TLeadGlassMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeadGlassMCEvent*)
   {
      ::TLeadGlassMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeadGlassMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLeadGlassMCEvent", ::TLeadGlassMCEvent::Class_Version(), "TLeadGlassMCEvent.hh", 12,
                  typeid(::TLeadGlassMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeadGlassMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TLeadGlassMCEvent) );
      instance.SetNew(&new_TLeadGlassMCEvent);
      instance.SetNewArray(&newArray_TLeadGlassMCEvent);
      instance.SetDelete(&delete_TLeadGlassMCEvent);
      instance.SetDeleteArray(&deleteArray_TLeadGlassMCEvent);
      instance.SetDestructor(&destruct_TLeadGlassMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeadGlassMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLeadGlassMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLeadGlassMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeadGlassMCHit(void *p = nullptr);
   static void *newArray_TLeadGlassMCHit(Long_t size, void *p);
   static void delete_TLeadGlassMCHit(void *p);
   static void deleteArray_TLeadGlassMCHit(void *p);
   static void destruct_TLeadGlassMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeadGlassMCHit*)
   {
      ::TLeadGlassMCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeadGlassMCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLeadGlassMCHit", ::TLeadGlassMCHit::Class_Version(), "TLeadGlassMCHit.hh", 12,
                  typeid(::TLeadGlassMCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeadGlassMCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TLeadGlassMCHit) );
      instance.SetNew(&new_TLeadGlassMCHit);
      instance.SetNewArray(&newArray_TLeadGlassMCHit);
      instance.SetDelete(&delete_TLeadGlassMCHit);
      instance.SetDeleteArray(&deleteArray_TLeadGlassMCHit);
      instance.SetDestructor(&destruct_TLeadGlassMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeadGlassMCHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLeadGlassMCHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLeadGlassMCHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeadGlassRecoEvent(void *p = nullptr);
   static void *newArray_TLeadGlassRecoEvent(Long_t size, void *p);
   static void delete_TLeadGlassRecoEvent(void *p);
   static void deleteArray_TLeadGlassRecoEvent(void *p);
   static void destruct_TLeadGlassRecoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeadGlassRecoEvent*)
   {
      ::TLeadGlassRecoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeadGlassRecoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLeadGlassRecoEvent", ::TLeadGlassRecoEvent::Class_Version(), "TLeadGlassRecoEvent.hh", 6,
                  typeid(::TLeadGlassRecoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeadGlassRecoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TLeadGlassRecoEvent) );
      instance.SetNew(&new_TLeadGlassRecoEvent);
      instance.SetNewArray(&newArray_TLeadGlassRecoEvent);
      instance.SetDelete(&delete_TLeadGlassRecoEvent);
      instance.SetDeleteArray(&deleteArray_TLeadGlassRecoEvent);
      instance.SetDestructor(&destruct_TLeadGlassRecoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeadGlassRecoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLeadGlassRecoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLeadGlassRecoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMCEvent(void *p = nullptr);
   static void *newArray_TMCEvent(Long_t size, void *p);
   static void delete_TMCEvent(void *p);
   static void deleteArray_TMCEvent(void *p);
   static void destruct_TMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCEvent*)
   {
      ::TMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCEvent", ::TMCEvent::Class_Version(), "TMCEvent.hh", 15,
                  typeid(::TMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TMCEvent) );
      instance.SetNew(&new_TMCEvent);
      instance.SetNewArray(&newArray_TMCEvent);
      instance.SetDelete(&delete_TMCEvent);
      instance.SetDeleteArray(&deleteArray_TMCEvent);
      instance.SetDestructor(&destruct_TMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMCParticle(void *p = nullptr);
   static void *newArray_TMCParticle(Long_t size, void *p);
   static void delete_TMCParticle(void *p);
   static void deleteArray_TMCParticle(void *p);
   static void destruct_TMCParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCParticle*)
   {
      ::TMCParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCParticle", ::TMCParticle::Class_Version(), "TMCParticle.hh", 15,
                  typeid(::TMCParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TMCParticle) );
      instance.SetNew(&new_TMCParticle);
      instance.SetNewArray(&newArray_TMCParticle);
      instance.SetDelete(&delete_TMCParticle);
      instance.SetDeleteArray(&deleteArray_TMCParticle);
      instance.SetDestructor(&destruct_TMCParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMCVertex(void *p = nullptr);
   static void *newArray_TMCVertex(Long_t size, void *p);
   static void delete_TMCVertex(void *p);
   static void deleteArray_TMCVertex(void *p);
   static void destruct_TMCVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCVertex*)
   {
      ::TMCVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCVertex", ::TMCVertex::Class_Version(), "TMCVertex.hh", 17,
                  typeid(::TMCVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCVertex::Dictionary, isa_proxy, 4,
                  sizeof(::TMCVertex) );
      instance.SetNew(&new_TMCVertex);
      instance.SetNewArray(&newArray_TMCVertex);
      instance.SetDelete(&delete_TMCVertex);
      instance.SetDeleteArray(&deleteArray_TMCVertex);
      instance.SetDestructor(&destruct_TMCVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCVertex*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCVertex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCVertex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMCTruthEvent(void *p = nullptr);
   static void *newArray_TMCTruthEvent(Long_t size, void *p);
   static void delete_TMCTruthEvent(void *p);
   static void deleteArray_TMCTruthEvent(void *p);
   static void destruct_TMCTruthEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCTruthEvent*)
   {
      ::TMCTruthEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCTruthEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMCTruthEvent", ::TMCTruthEvent::Class_Version(), "TMCTruthEvent.hh", 15,
                  typeid(::TMCTruthEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCTruthEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TMCTruthEvent) );
      instance.SetNew(&new_TMCTruthEvent);
      instance.SetNewArray(&newArray_TMCTruthEvent);
      instance.SetDelete(&delete_TMCTruthEvent);
      instance.SetDeleteArray(&deleteArray_TMCTruthEvent);
      instance.SetDestructor(&destruct_TMCTruthEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCTruthEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMCTruthEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMCTruthEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMMChannel(void *p = nullptr);
   static void *newArray_TMMChannel(Long_t size, void *p);
   static void delete_TMMChannel(void *p);
   static void deleteArray_TMMChannel(void *p);
   static void destruct_TMMChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMMChannel*)
   {
      ::TMMChannel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMMChannel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMMChannel", ::TMMChannel::Class_Version(), "TMMChannel.hh", 8,
                  typeid(::TMMChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMMChannel::Dictionary, isa_proxy, 4,
                  sizeof(::TMMChannel) );
      instance.SetNew(&new_TMMChannel);
      instance.SetNewArray(&newArray_TMMChannel);
      instance.SetDelete(&delete_TMMChannel);
      instance.SetDeleteArray(&deleteArray_TMMChannel);
      instance.SetDestructor(&destruct_TMMChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMMChannel*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMMChannel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMMChannel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMMBoard(void *p = nullptr);
   static void *newArray_TMMBoard(Long_t size, void *p);
   static void delete_TMMBoard(void *p);
   static void deleteArray_TMMBoard(void *p);
   static void destruct_TMMBoard(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMMBoard*)
   {
      ::TMMBoard *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMMBoard >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMMBoard", ::TMMBoard::Class_Version(), "TMMBoard.hh", 11,
                  typeid(::TMMBoard), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMMBoard::Dictionary, isa_proxy, 4,
                  sizeof(::TMMBoard) );
      instance.SetNew(&new_TMMBoard);
      instance.SetNewArray(&newArray_TMMBoard);
      instance.SetDelete(&delete_TMMBoard);
      instance.SetDeleteArray(&deleteArray_TMMBoard);
      instance.SetDestructor(&destruct_TMMBoard);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMMBoard*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMMBoard*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMMBoard*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMMClusCollection(void *p = nullptr);
   static void *newArray_TMMClusCollection(Long_t size, void *p);
   static void delete_TMMClusCollection(void *p);
   static void deleteArray_TMMClusCollection(void *p);
   static void destruct_TMMClusCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMMClusCollection*)
   {
      ::TMMClusCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMMClusCollection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMMClusCollection", ::TMMClusCollection::Class_Version(), "TMMClusCollection.hh", 6,
                  typeid(::TMMClusCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMMClusCollection::Dictionary, isa_proxy, 4,
                  sizeof(::TMMClusCollection) );
      instance.SetNew(&new_TMMClusCollection);
      instance.SetNewArray(&newArray_TMMClusCollection);
      instance.SetDelete(&delete_TMMClusCollection);
      instance.SetDeleteArray(&deleteArray_TMMClusCollection);
      instance.SetDestructor(&destruct_TMMClusCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMMClusCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMMClusCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMMClusCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMMInfo(void *p = nullptr);
   static void *newArray_TMMInfo(Long_t size, void *p);
   static void delete_TMMInfo(void *p);
   static void deleteArray_TMMInfo(void *p);
   static void destruct_TMMInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMMInfo*)
   {
      ::TMMInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMMInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMMInfo", ::TMMInfo::Class_Version(), "TMMInfo.hh", 6,
                  typeid(::TMMInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMMInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TMMInfo) );
      instance.SetNew(&new_TMMInfo);
      instance.SetNewArray(&newArray_TMMInfo);
      instance.SetDelete(&delete_TMMInfo);
      instance.SetDeleteArray(&deleteArray_TMMInfo);
      instance.SetDestructor(&destruct_TMMInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMMInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMMInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMMInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMMMCDigi(void *p = nullptr);
   static void *newArray_TMMMCDigi(Long_t size, void *p);
   static void delete_TMMMCDigi(void *p);
   static void deleteArray_TMMMCDigi(void *p);
   static void destruct_TMMMCDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMMMCDigi*)
   {
      ::TMMMCDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMMMCDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMMMCDigi", ::TMMMCDigi::Class_Version(), "TMMMCDigi.hh", 12,
                  typeid(::TMMMCDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMMMCDigi::Dictionary, isa_proxy, 4,
                  sizeof(::TMMMCDigi) );
      instance.SetNew(&new_TMMMCDigi);
      instance.SetNewArray(&newArray_TMMMCDigi);
      instance.SetDelete(&delete_TMMMCDigi);
      instance.SetDeleteArray(&deleteArray_TMMMCDigi);
      instance.SetDestructor(&destruct_TMMMCDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMMMCDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMMMCDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMMMCDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMMMCEvent(void *p = nullptr);
   static void *newArray_TMMMCEvent(Long_t size, void *p);
   static void delete_TMMMCEvent(void *p);
   static void deleteArray_TMMMCEvent(void *p);
   static void destruct_TMMMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMMMCEvent*)
   {
      ::TMMMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMMMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMMMCEvent", ::TMMMCEvent::Class_Version(), "TMMMCEvent.hh", 12,
                  typeid(::TMMMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMMMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TMMMCEvent) );
      instance.SetNew(&new_TMMMCEvent);
      instance.SetNewArray(&newArray_TMMMCEvent);
      instance.SetDelete(&delete_TMMMCEvent);
      instance.SetDeleteArray(&deleteArray_TMMMCEvent);
      instance.SetDestructor(&destruct_TMMMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMMMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMMMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMMMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMMMCHit(void *p = nullptr);
   static void *newArray_TMMMCHit(Long_t size, void *p);
   static void delete_TMMMCHit(void *p);
   static void deleteArray_TMMMCHit(void *p);
   static void destruct_TMMMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMMMCHit*)
   {
      ::TMMMCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMMMCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMMMCHit", ::TMMMCHit::Class_Version(), "TMMMCHit.hh", 12,
                  typeid(::TMMMCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMMMCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TMMMCHit) );
      instance.SetNew(&new_TMMMCHit);
      instance.SetNewArray(&newArray_TMMMCHit);
      instance.SetDelete(&delete_TMMMCHit);
      instance.SetDeleteArray(&deleteArray_TMMMCHit);
      instance.SetDestructor(&destruct_TMMMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMMMCHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMMMCHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMMMCHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMMRawEvent(void *p = nullptr);
   static void *newArray_TMMRawEvent(Long_t size, void *p);
   static void delete_TMMRawEvent(void *p);
   static void deleteArray_TMMRawEvent(void *p);
   static void destruct_TMMRawEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMMRawEvent*)
   {
      ::TMMRawEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMMRawEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMMRawEvent", ::TMMRawEvent::Class_Version(), "TMMRawEvent.hh", 10,
                  typeid(::TMMRawEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMMRawEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TMMRawEvent) );
      instance.SetNew(&new_TMMRawEvent);
      instance.SetNewArray(&newArray_TMMRawEvent);
      instance.SetDelete(&delete_TMMRawEvent);
      instance.SetDeleteArray(&deleteArray_TMMRawEvent);
      instance.SetDestructor(&destruct_TMMRawEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMMRawEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMMRawEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMMRawEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMMRecoEvent(void *p = nullptr);
   static void *newArray_TMMRecoEvent(Long_t size, void *p);
   static void delete_TMMRecoEvent(void *p);
   static void deleteArray_TMMRecoEvent(void *p);
   static void destruct_TMMRecoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMMRecoEvent*)
   {
      ::TMMRecoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMMRecoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMMRecoEvent", ::TMMRecoEvent::Class_Version(), "TMMRecoEvent.hh", 6,
                  typeid(::TMMRecoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMMRecoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TMMRecoEvent) );
      instance.SetNew(&new_TMMRecoEvent);
      instance.SetNewArray(&newArray_TMMRecoEvent);
      instance.SetDelete(&delete_TMMRecoEvent);
      instance.SetDeleteArray(&deleteArray_TMMRecoEvent);
      instance.SetDestructor(&destruct_TMMRecoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMMRecoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMMRecoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMMRecoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPadmeRun(void *p = nullptr);
   static void *newArray_TPadmeRun(Long_t size, void *p);
   static void delete_TPadmeRun(void *p);
   static void deleteArray_TPadmeRun(void *p);
   static void destruct_TPadmeRun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPadmeRun*)
   {
      ::TPadmeRun *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPadmeRun >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPadmeRun", ::TPadmeRun::Class_Version(), "TPadmeRun.hh", 15,
                  typeid(::TPadmeRun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPadmeRun::Dictionary, isa_proxy, 4,
                  sizeof(::TPadmeRun) );
      instance.SetNew(&new_TPadmeRun);
      instance.SetNewArray(&newArray_TPadmeRun);
      instance.SetDelete(&delete_TPadmeRun);
      instance.SetDeleteArray(&deleteArray_TPadmeRun);
      instance.SetDestructor(&destruct_TPadmeRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPadmeRun*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPadmeRun*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPadmeRun*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPVetoClusCollection(void *p = nullptr);
   static void *newArray_TPVetoClusCollection(Long_t size, void *p);
   static void delete_TPVetoClusCollection(void *p);
   static void deleteArray_TPVetoClusCollection(void *p);
   static void destruct_TPVetoClusCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPVetoClusCollection*)
   {
      ::TPVetoClusCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPVetoClusCollection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPVetoClusCollection", ::TPVetoClusCollection::Class_Version(), "TPVetoClusCollection.hh", 6,
                  typeid(::TPVetoClusCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPVetoClusCollection::Dictionary, isa_proxy, 4,
                  sizeof(::TPVetoClusCollection) );
      instance.SetNew(&new_TPVetoClusCollection);
      instance.SetNewArray(&newArray_TPVetoClusCollection);
      instance.SetDelete(&delete_TPVetoClusCollection);
      instance.SetDeleteArray(&deleteArray_TPVetoClusCollection);
      instance.SetDestructor(&destruct_TPVetoClusCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPVetoClusCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPVetoClusCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPVetoClusCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPVetoMCDigi(void *p = nullptr);
   static void *newArray_TPVetoMCDigi(Long_t size, void *p);
   static void delete_TPVetoMCDigi(void *p);
   static void deleteArray_TPVetoMCDigi(void *p);
   static void destruct_TPVetoMCDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPVetoMCDigi*)
   {
      ::TPVetoMCDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPVetoMCDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPVetoMCDigi", ::TPVetoMCDigi::Class_Version(), "TPVetoMCDigi.hh", 12,
                  typeid(::TPVetoMCDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPVetoMCDigi::Dictionary, isa_proxy, 4,
                  sizeof(::TPVetoMCDigi) );
      instance.SetNew(&new_TPVetoMCDigi);
      instance.SetNewArray(&newArray_TPVetoMCDigi);
      instance.SetDelete(&delete_TPVetoMCDigi);
      instance.SetDeleteArray(&deleteArray_TPVetoMCDigi);
      instance.SetDestructor(&destruct_TPVetoMCDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPVetoMCDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPVetoMCDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPVetoMCDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPVetoMCEvent(void *p = nullptr);
   static void *newArray_TPVetoMCEvent(Long_t size, void *p);
   static void delete_TPVetoMCEvent(void *p);
   static void deleteArray_TPVetoMCEvent(void *p);
   static void destruct_TPVetoMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPVetoMCEvent*)
   {
      ::TPVetoMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPVetoMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPVetoMCEvent", ::TPVetoMCEvent::Class_Version(), "TPVetoMCEvent.hh", 12,
                  typeid(::TPVetoMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPVetoMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TPVetoMCEvent) );
      instance.SetNew(&new_TPVetoMCEvent);
      instance.SetNewArray(&newArray_TPVetoMCEvent);
      instance.SetDelete(&delete_TPVetoMCEvent);
      instance.SetDeleteArray(&deleteArray_TPVetoMCEvent);
      instance.SetDestructor(&destruct_TPVetoMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPVetoMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPVetoMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPVetoMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPVetoMCHit(void *p = nullptr);
   static void *newArray_TPVetoMCHit(Long_t size, void *p);
   static void delete_TPVetoMCHit(void *p);
   static void deleteArray_TPVetoMCHit(void *p);
   static void destruct_TPVetoMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPVetoMCHit*)
   {
      ::TPVetoMCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPVetoMCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPVetoMCHit", ::TPVetoMCHit::Class_Version(), "TPVetoMCHit.hh", 12,
                  typeid(::TPVetoMCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPVetoMCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TPVetoMCHit) );
      instance.SetNew(&new_TPVetoMCHit);
      instance.SetNewArray(&newArray_TPVetoMCHit);
      instance.SetDelete(&delete_TPVetoMCHit);
      instance.SetDeleteArray(&deleteArray_TPVetoMCHit);
      instance.SetDestructor(&destruct_TPVetoMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPVetoMCHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPVetoMCHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPVetoMCHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPVetoRecoEvent(void *p = nullptr);
   static void *newArray_TPVetoRecoEvent(Long_t size, void *p);
   static void delete_TPVetoRecoEvent(void *p);
   static void deleteArray_TPVetoRecoEvent(void *p);
   static void destruct_TPVetoRecoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPVetoRecoEvent*)
   {
      ::TPVetoRecoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPVetoRecoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPVetoRecoEvent", ::TPVetoRecoEvent::Class_Version(), "TPVetoRecoEvent.hh", 6,
                  typeid(::TPVetoRecoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPVetoRecoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TPVetoRecoEvent) );
      instance.SetNew(&new_TPVetoRecoEvent);
      instance.SetNewArray(&newArray_TPVetoRecoEvent);
      instance.SetDelete(&delete_TPVetoRecoEvent);
      instance.SetDeleteArray(&deleteArray_TPVetoRecoEvent);
      instance.SetDestructor(&destruct_TPVetoRecoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPVetoRecoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPVetoRecoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPVetoRecoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTriggerInfo(void *p = nullptr);
   static void *newArray_TTriggerInfo(Long_t size, void *p);
   static void delete_TTriggerInfo(void *p);
   static void deleteArray_TTriggerInfo(void *p);
   static void destruct_TTriggerInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTriggerInfo*)
   {
      ::TTriggerInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTriggerInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTriggerInfo", ::TTriggerInfo::Class_Version(), "TTriggerInfo.hh", 6,
                  typeid(::TTriggerInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTriggerInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TTriggerInfo) );
      instance.SetNew(&new_TTriggerInfo);
      instance.SetNewArray(&newArray_TTriggerInfo);
      instance.SetDelete(&delete_TTriggerInfo);
      instance.SetDeleteArray(&deleteArray_TTriggerInfo);
      instance.SetDestructor(&destruct_TTriggerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTriggerInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTriggerInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTriggerInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRawEvent(void *p = nullptr);
   static void *newArray_TRawEvent(Long_t size, void *p);
   static void delete_TRawEvent(void *p);
   static void deleteArray_TRawEvent(void *p);
   static void destruct_TRawEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRawEvent*)
   {
      ::TRawEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRawEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRawEvent", ::TRawEvent::Class_Version(), "TRawEvent.hh", 15,
                  typeid(::TRawEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRawEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TRawEvent) );
      instance.SetNew(&new_TRawEvent);
      instance.SetNewArray(&newArray_TRawEvent);
      instance.SetDelete(&delete_TRawEvent);
      instance.SetDeleteArray(&deleteArray_TRawEvent);
      instance.SetDestructor(&destruct_TRawEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRawEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRawEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRawEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRawMergedEvent(void *p = nullptr);
   static void *newArray_TRawMergedEvent(Long_t size, void *p);
   static void delete_TRawMergedEvent(void *p);
   static void deleteArray_TRawMergedEvent(void *p);
   static void destruct_TRawMergedEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRawMergedEvent*)
   {
      ::TRawMergedEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRawMergedEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRawMergedEvent", ::TRawMergedEvent::Class_Version(), "TRawMergedEvent.hh", 8,
                  typeid(::TRawMergedEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRawMergedEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TRawMergedEvent) );
      instance.SetNew(&new_TRawMergedEvent);
      instance.SetNewArray(&newArray_TRawMergedEvent);
      instance.SetDelete(&delete_TRawMergedEvent);
      instance.SetDeleteArray(&deleteArray_TRawMergedEvent);
      instance.SetDestructor(&destruct_TRawMergedEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRawMergedEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRawMergedEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRawMergedEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRecoEvent(void *p = nullptr);
   static void *newArray_TRecoEvent(Long_t size, void *p);
   static void delete_TRecoEvent(void *p);
   static void deleteArray_TRecoEvent(void *p);
   static void destruct_TRecoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRecoEvent*)
   {
      ::TRecoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRecoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRecoEvent", ::TRecoEvent::Class_Version(), "TRecoEvent.hh", 21,
                  typeid(::TRecoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRecoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TRecoEvent) );
      instance.SetNew(&new_TRecoEvent);
      instance.SetNewArray(&newArray_TRecoEvent);
      instance.SetDelete(&delete_TRecoEvent);
      instance.SetDeleteArray(&deleteArray_TRecoEvent);
      instance.SetDestructor(&destruct_TRecoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRecoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRecoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRecoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSACClusCollection(void *p = nullptr);
   static void *newArray_TSACClusCollection(Long_t size, void *p);
   static void delete_TSACClusCollection(void *p);
   static void deleteArray_TSACClusCollection(void *p);
   static void destruct_TSACClusCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSACClusCollection*)
   {
      ::TSACClusCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSACClusCollection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSACClusCollection", ::TSACClusCollection::Class_Version(), "TSACClusCollection.hh", 7,
                  typeid(::TSACClusCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSACClusCollection::Dictionary, isa_proxy, 4,
                  sizeof(::TSACClusCollection) );
      instance.SetNew(&new_TSACClusCollection);
      instance.SetNewArray(&newArray_TSACClusCollection);
      instance.SetDelete(&delete_TSACClusCollection);
      instance.SetDeleteArray(&deleteArray_TSACClusCollection);
      instance.SetDestructor(&destruct_TSACClusCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSACClusCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSACClusCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSACClusCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSACMCDigi(void *p = nullptr);
   static void *newArray_TSACMCDigi(Long_t size, void *p);
   static void delete_TSACMCDigi(void *p);
   static void deleteArray_TSACMCDigi(void *p);
   static void destruct_TSACMCDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSACMCDigi*)
   {
      ::TSACMCDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSACMCDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSACMCDigi", ::TSACMCDigi::Class_Version(), "TSACMCDigi.hh", 14,
                  typeid(::TSACMCDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSACMCDigi::Dictionary, isa_proxy, 4,
                  sizeof(::TSACMCDigi) );
      instance.SetNew(&new_TSACMCDigi);
      instance.SetNewArray(&newArray_TSACMCDigi);
      instance.SetDelete(&delete_TSACMCDigi);
      instance.SetDeleteArray(&deleteArray_TSACMCDigi);
      instance.SetDestructor(&destruct_TSACMCDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSACMCDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSACMCDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSACMCDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSACMCEvent(void *p = nullptr);
   static void *newArray_TSACMCEvent(Long_t size, void *p);
   static void delete_TSACMCEvent(void *p);
   static void deleteArray_TSACMCEvent(void *p);
   static void destruct_TSACMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSACMCEvent*)
   {
      ::TSACMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSACMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSACMCEvent", ::TSACMCEvent::Class_Version(), "TSACMCEvent.hh", 14,
                  typeid(::TSACMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSACMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TSACMCEvent) );
      instance.SetNew(&new_TSACMCEvent);
      instance.SetNewArray(&newArray_TSACMCEvent);
      instance.SetDelete(&delete_TSACMCEvent);
      instance.SetDeleteArray(&deleteArray_TSACMCEvent);
      instance.SetDestructor(&destruct_TSACMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSACMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSACMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSACMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSACMCHit(void *p = nullptr);
   static void *newArray_TSACMCHit(Long_t size, void *p);
   static void delete_TSACMCHit(void *p);
   static void deleteArray_TSACMCHit(void *p);
   static void destruct_TSACMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSACMCHit*)
   {
      ::TSACMCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSACMCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSACMCHit", ::TSACMCHit::Class_Version(), "TSACMCHit.hh", 16,
                  typeid(::TSACMCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSACMCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TSACMCHit) );
      instance.SetNew(&new_TSACMCHit);
      instance.SetNewArray(&newArray_TSACMCHit);
      instance.SetDelete(&delete_TSACMCHit);
      instance.SetDeleteArray(&deleteArray_TSACMCHit);
      instance.SetDestructor(&destruct_TSACMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSACMCHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSACMCHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSACMCHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSACRecoEvent(void *p = nullptr);
   static void *newArray_TSACRecoEvent(Long_t size, void *p);
   static void delete_TSACRecoEvent(void *p);
   static void deleteArray_TSACRecoEvent(void *p);
   static void destruct_TSACRecoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSACRecoEvent*)
   {
      ::TSACRecoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSACRecoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSACRecoEvent", ::TSACRecoEvent::Class_Version(), "TSACRecoEvent.hh", 7,
                  typeid(::TSACRecoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSACRecoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TSACRecoEvent) );
      instance.SetNew(&new_TSACRecoEvent);
      instance.SetNewArray(&newArray_TSACRecoEvent);
      instance.SetDelete(&delete_TSACRecoEvent);
      instance.SetDeleteArray(&deleteArray_TSACRecoEvent);
      instance.SetDestructor(&destruct_TSACRecoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSACRecoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSACRecoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSACRecoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTargetSignalFitParams(void *p = nullptr);
   static void *newArray_TTargetSignalFitParams(Long_t size, void *p);
   static void delete_TTargetSignalFitParams(void *p);
   static void deleteArray_TTargetSignalFitParams(void *p);
   static void destruct_TTargetSignalFitParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTargetSignalFitParams*)
   {
      ::TTargetSignalFitParams *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTargetSignalFitParams >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTargetSignalFitParams", ::TTargetSignalFitParams::Class_Version(), "TTargetSignalFitParams.hh", 14,
                  typeid(::TTargetSignalFitParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTargetSignalFitParams::Dictionary, isa_proxy, 4,
                  sizeof(::TTargetSignalFitParams) );
      instance.SetNew(&new_TTargetSignalFitParams);
      instance.SetNewArray(&newArray_TTargetSignalFitParams);
      instance.SetDelete(&delete_TTargetSignalFitParams);
      instance.SetDeleteArray(&deleteArray_TTargetSignalFitParams);
      instance.SetDestructor(&destruct_TTargetSignalFitParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTargetSignalFitParams*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTargetSignalFitParams*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTargetSignalFitParams*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTargetFitEvent(void *p = nullptr);
   static void *newArray_TTargetFitEvent(Long_t size, void *p);
   static void delete_TTargetFitEvent(void *p);
   static void deleteArray_TTargetFitEvent(void *p);
   static void destruct_TTargetFitEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTargetFitEvent*)
   {
      ::TTargetFitEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTargetFitEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTargetFitEvent", ::TTargetFitEvent::Class_Version(), "TTargetFitEvent.hh", 10,
                  typeid(::TTargetFitEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTargetFitEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TTargetFitEvent) );
      instance.SetNew(&new_TTargetFitEvent);
      instance.SetNewArray(&newArray_TTargetFitEvent);
      instance.SetDelete(&delete_TTargetFitEvent);
      instance.SetDeleteArray(&deleteArray_TTargetFitEvent);
      instance.SetDestructor(&destruct_TTargetFitEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTargetFitEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTargetFitEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTargetFitEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTargetMCDigi(void *p = nullptr);
   static void *newArray_TTargetMCDigi(Long_t size, void *p);
   static void delete_TTargetMCDigi(void *p);
   static void deleteArray_TTargetMCDigi(void *p);
   static void destruct_TTargetMCDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTargetMCDigi*)
   {
      ::TTargetMCDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTargetMCDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTargetMCDigi", ::TTargetMCDigi::Class_Version(), "TTargetMCDigi.hh", 12,
                  typeid(::TTargetMCDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTargetMCDigi::Dictionary, isa_proxy, 4,
                  sizeof(::TTargetMCDigi) );
      instance.SetNew(&new_TTargetMCDigi);
      instance.SetNewArray(&newArray_TTargetMCDigi);
      instance.SetDelete(&delete_TTargetMCDigi);
      instance.SetDeleteArray(&deleteArray_TTargetMCDigi);
      instance.SetDestructor(&destruct_TTargetMCDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTargetMCDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTargetMCDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTargetMCDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTargetMCEvent(void *p = nullptr);
   static void *newArray_TTargetMCEvent(Long_t size, void *p);
   static void delete_TTargetMCEvent(void *p);
   static void deleteArray_TTargetMCEvent(void *p);
   static void destruct_TTargetMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTargetMCEvent*)
   {
      ::TTargetMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTargetMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTargetMCEvent", ::TTargetMCEvent::Class_Version(), "TTargetMCEvent.hh", 12,
                  typeid(::TTargetMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTargetMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TTargetMCEvent) );
      instance.SetNew(&new_TTargetMCEvent);
      instance.SetNewArray(&newArray_TTargetMCEvent);
      instance.SetDelete(&delete_TTargetMCEvent);
      instance.SetDeleteArray(&deleteArray_TTargetMCEvent);
      instance.SetDestructor(&destruct_TTargetMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTargetMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTargetMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTargetMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTargetMCHit(void *p = nullptr);
   static void *newArray_TTargetMCHit(Long_t size, void *p);
   static void delete_TTargetMCHit(void *p);
   static void deleteArray_TTargetMCHit(void *p);
   static void destruct_TTargetMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTargetMCHit*)
   {
      ::TTargetMCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTargetMCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTargetMCHit", ::TTargetMCHit::Class_Version(), "TTargetMCHit.hh", 12,
                  typeid(::TTargetMCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTargetMCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TTargetMCHit) );
      instance.SetNew(&new_TTargetMCHit);
      instance.SetNewArray(&newArray_TTargetMCHit);
      instance.SetDelete(&delete_TTargetMCHit);
      instance.SetDeleteArray(&deleteArray_TTargetMCHit);
      instance.SetDestructor(&destruct_TTargetMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTargetMCHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTargetMCHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTargetMCHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTargetRecoBeam(void *p = nullptr);
   static void *newArray_TTargetRecoBeam(Long_t size, void *p);
   static void delete_TTargetRecoBeam(void *p);
   static void deleteArray_TTargetRecoBeam(void *p);
   static void destruct_TTargetRecoBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTargetRecoBeam*)
   {
      ::TTargetRecoBeam *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTargetRecoBeam >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTargetRecoBeam", ::TTargetRecoBeam::Class_Version(), "TTargetRecoBeam.hh", 14,
                  typeid(::TTargetRecoBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTargetRecoBeam::Dictionary, isa_proxy, 4,
                  sizeof(::TTargetRecoBeam) );
      instance.SetNew(&new_TTargetRecoBeam);
      instance.SetNewArray(&newArray_TTargetRecoBeam);
      instance.SetDelete(&delete_TTargetRecoBeam);
      instance.SetDeleteArray(&deleteArray_TTargetRecoBeam);
      instance.SetDestructor(&destruct_TTargetRecoBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTargetRecoBeam*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTargetRecoBeam*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTargetRecoBeam*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTargetRecoEvent(void *p = nullptr);
   static void *newArray_TTargetRecoEvent(Long_t size, void *p);
   static void delete_TTargetRecoEvent(void *p);
   static void deleteArray_TTargetRecoEvent(void *p);
   static void destruct_TTargetRecoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTargetRecoEvent*)
   {
      ::TTargetRecoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTargetRecoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTargetRecoEvent", ::TTargetRecoEvent::Class_Version(), "TTargetRecoEvent.hh", 7,
                  typeid(::TTargetRecoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTargetRecoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TTargetRecoEvent) );
      instance.SetNew(&new_TTargetRecoEvent);
      instance.SetNewArray(&newArray_TTargetRecoEvent);
      instance.SetDelete(&delete_TTargetRecoEvent);
      instance.SetDeleteArray(&deleteArray_TTargetRecoEvent);
      instance.SetDestructor(&destruct_TTargetRecoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTargetRecoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTargetRecoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTargetRecoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTPixMCDigi(void *p = nullptr);
   static void *newArray_TTPixMCDigi(Long_t size, void *p);
   static void delete_TTPixMCDigi(void *p);
   static void deleteArray_TTPixMCDigi(void *p);
   static void destruct_TTPixMCDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTPixMCDigi*)
   {
      ::TTPixMCDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTPixMCDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTPixMCDigi", ::TTPixMCDigi::Class_Version(), "TTPixMCDigi.hh", 14,
                  typeid(::TTPixMCDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTPixMCDigi::Dictionary, isa_proxy, 4,
                  sizeof(::TTPixMCDigi) );
      instance.SetNew(&new_TTPixMCDigi);
      instance.SetNewArray(&newArray_TTPixMCDigi);
      instance.SetDelete(&delete_TTPixMCDigi);
      instance.SetDeleteArray(&deleteArray_TTPixMCDigi);
      instance.SetDestructor(&destruct_TTPixMCDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTPixMCDigi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTPixMCDigi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTPixMCDigi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTPixMCEvent(void *p = nullptr);
   static void *newArray_TTPixMCEvent(Long_t size, void *p);
   static void delete_TTPixMCEvent(void *p);
   static void deleteArray_TTPixMCEvent(void *p);
   static void destruct_TTPixMCEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTPixMCEvent*)
   {
      ::TTPixMCEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTPixMCEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTPixMCEvent", ::TTPixMCEvent::Class_Version(), "TTPixMCEvent.hh", 12,
                  typeid(::TTPixMCEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTPixMCEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TTPixMCEvent) );
      instance.SetNew(&new_TTPixMCEvent);
      instance.SetNewArray(&newArray_TTPixMCEvent);
      instance.SetDelete(&delete_TTPixMCEvent);
      instance.SetDeleteArray(&deleteArray_TTPixMCEvent);
      instance.SetDestructor(&destruct_TTPixMCEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTPixMCEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTPixMCEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTPixMCEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTPixMCHit(void *p = nullptr);
   static void *newArray_TTPixMCHit(Long_t size, void *p);
   static void delete_TTPixMCHit(void *p);
   static void deleteArray_TTPixMCHit(void *p);
   static void destruct_TTPixMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTPixMCHit*)
   {
      ::TTPixMCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTPixMCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTPixMCHit", ::TTPixMCHit::Class_Version(), "TTPixMCHit.hh", 12,
                  typeid(::TTPixMCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTPixMCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TTPixMCHit) );
      instance.SetNew(&new_TTPixMCHit);
      instance.SetNewArray(&newArray_TTPixMCHit);
      instance.SetDelete(&delete_TTPixMCHit);
      instance.SetDeleteArray(&deleteArray_TTPixMCHit);
      instance.SetDestructor(&destruct_TTPixMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTPixMCHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTPixMCHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTPixMCHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TADCChannel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TADCChannel::Class_Name()
{
   return "TADCChannel";
}

//______________________________________________________________________________
const char *TADCChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TADCChannel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TADCChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TADCChannel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TADCChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TADCChannel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TADCChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TADCChannel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TADCTrigger::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TADCTrigger::Class_Name()
{
   return "TADCTrigger";
}

//______________________________________________________________________________
const char *TADCTrigger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TADCTrigger*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TADCTrigger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TADCTrigger*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TADCTrigger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TADCTrigger*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TADCTrigger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TADCTrigger*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TADCBoard::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TADCBoard::Class_Name()
{
   return "TADCBoard";
}

//______________________________________________________________________________
const char *TADCBoard::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TADCBoard*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TADCBoard::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TADCBoard*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TADCBoard::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TADCBoard*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TADCBoard::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TADCBoard*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSubDetectorInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSubDetectorInfo::Class_Name()
{
   return "TSubDetectorInfo";
}

//______________________________________________________________________________
const char *TSubDetectorInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSubDetectorInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSubDetectorInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSubDetectorInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSubDetectorInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSubDetectorInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSubDetectorInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSubDetectorInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDetectorInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDetectorInfo::Class_Name()
{
   return "TDetectorInfo";
}

//______________________________________________________________________________
const char *TDetectorInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDetectorInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDetectorInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDetectorInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDetectorInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDetectorInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDetectorInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDetectorInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCVHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCVHit::Class_Name()
{
   return "TMCVHit";
}

//______________________________________________________________________________
const char *TMCVHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCVHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCVHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCVHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCVHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCVHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCVHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCVHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecoVCluster::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecoVCluster::Class_Name()
{
   return "TRecoVCluster";
}

//______________________________________________________________________________
const char *TRecoVCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecoVCluster*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecoVCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecoVCluster*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecoVCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecoVCluster*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecoVCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecoVCluster*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecoVClusCollection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecoVClusCollection::Class_Name()
{
   return "TRecoVClusCollection";
}

//______________________________________________________________________________
const char *TRecoVClusCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecoVClusCollection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecoVClusCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecoVClusCollection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecoVClusCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecoVClusCollection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecoVClusCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecoVClusCollection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TECalClusCollection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TECalClusCollection::Class_Name()
{
   return "TECalClusCollection";
}

//______________________________________________________________________________
const char *TECalClusCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TECalClusCollection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TECalClusCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TECalClusCollection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TECalClusCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TECalClusCollection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TECalClusCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TECalClusCollection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCVDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCVDigi::Class_Name()
{
   return "TMCVDigi";
}

//______________________________________________________________________________
const char *TMCVDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCVDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCVDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCVDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCVDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCVDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCVDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCVDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TECalMCDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TECalMCDigi::Class_Name()
{
   return "TECalMCDigi";
}

//______________________________________________________________________________
const char *TECalMCDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TECalMCDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TECalMCDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TECalMCDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TECalMCDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TECalMCDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TECalMCDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TECalMCDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCVEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCVEvent::Class_Name()
{
   return "TMCVEvent";
}

//______________________________________________________________________________
const char *TMCVEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCVEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCVEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCVEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCVEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCVEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCVEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCVEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TECalMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TECalMCEvent::Class_Name()
{
   return "TECalMCEvent";
}

//______________________________________________________________________________
const char *TECalMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TECalMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TECalMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TECalMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TECalMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TECalMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TECalMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TECalMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TECalMCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TECalMCHit::Class_Name()
{
   return "TECalMCHit";
}

//______________________________________________________________________________
const char *TECalMCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TECalMCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TECalMCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TECalMCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TECalMCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TECalMCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TECalMCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TECalMCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecoVHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecoVHit::Class_Name()
{
   return "TRecoVHit";
}

//______________________________________________________________________________
const char *TRecoVHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecoVHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecoVHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecoVHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecoVHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecoVHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecoVHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecoVHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecoVObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecoVObject::Class_Name()
{
   return "TRecoVObject";
}

//______________________________________________________________________________
const char *TRecoVObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecoVObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecoVObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecoVObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecoVObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecoVObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecoVObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecoVObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TECalRecoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TECalRecoEvent::Class_Name()
{
   return "TECalRecoEvent";
}

//______________________________________________________________________________
const char *TECalRecoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TECalRecoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TECalRecoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TECalRecoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TECalRecoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TECalRecoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TECalRecoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TECalRecoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TETagClusCollection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TETagClusCollection::Class_Name()
{
   return "TETagClusCollection";
}

//______________________________________________________________________________
const char *TETagClusCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TETagClusCollection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TETagClusCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TETagClusCollection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TETagClusCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TETagClusCollection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TETagClusCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TETagClusCollection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TETagMCDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TETagMCDigi::Class_Name()
{
   return "TETagMCDigi";
}

//______________________________________________________________________________
const char *TETagMCDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TETagMCDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TETagMCDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TETagMCDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TETagMCDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TETagMCDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TETagMCDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TETagMCDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TETagMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TETagMCEvent::Class_Name()
{
   return "TETagMCEvent";
}

//______________________________________________________________________________
const char *TETagMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TETagMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TETagMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TETagMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TETagMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TETagMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TETagMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TETagMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TETagMCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TETagMCHit::Class_Name()
{
   return "TETagMCHit";
}

//______________________________________________________________________________
const char *TETagMCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TETagMCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TETagMCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TETagMCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TETagMCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TETagMCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TETagMCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TETagMCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TETagRecoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TETagRecoEvent::Class_Name()
{
   return "TETagRecoEvent";
}

//______________________________________________________________________________
const char *TETagRecoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TETagRecoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TETagRecoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TETagRecoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TETagRecoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TETagRecoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TETagRecoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TETagRecoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEVetoClusCollection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEVetoClusCollection::Class_Name()
{
   return "TEVetoClusCollection";
}

//______________________________________________________________________________
const char *TEVetoClusCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEVetoClusCollection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEVetoClusCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEVetoClusCollection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEVetoClusCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEVetoClusCollection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEVetoClusCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEVetoClusCollection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEVetoMCDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEVetoMCDigi::Class_Name()
{
   return "TEVetoMCDigi";
}

//______________________________________________________________________________
const char *TEVetoMCDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEVetoMCDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEVetoMCDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEVetoMCDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEVetoMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEVetoMCEvent::Class_Name()
{
   return "TEVetoMCEvent";
}

//______________________________________________________________________________
const char *TEVetoMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEVetoMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEVetoMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEVetoMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEVetoMCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEVetoMCHit::Class_Name()
{
   return "TEVetoMCHit";
}

//______________________________________________________________________________
const char *TEVetoMCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEVetoMCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEVetoMCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEVetoMCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEVetoMCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEVetoRecoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEVetoRecoEvent::Class_Name()
{
   return "TEVetoRecoEvent";
}

//______________________________________________________________________________
const char *TEVetoRecoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEVetoRecoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEVetoRecoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEVetoRecoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEVetoRecoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEVetoRecoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEVetoRecoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEVetoRecoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THEPVetoClusCollection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THEPVetoClusCollection::Class_Name()
{
   return "THEPVetoClusCollection";
}

//______________________________________________________________________________
const char *THEPVetoClusCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoClusCollection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THEPVetoClusCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoClusCollection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THEPVetoClusCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoClusCollection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THEPVetoClusCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoClusCollection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THEPVetoMCDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THEPVetoMCDigi::Class_Name()
{
   return "THEPVetoMCDigi";
}

//______________________________________________________________________________
const char *THEPVetoMCDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THEPVetoMCDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THEPVetoMCDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THEPVetoMCDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THEPVetoMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THEPVetoMCEvent::Class_Name()
{
   return "THEPVetoMCEvent";
}

//______________________________________________________________________________
const char *THEPVetoMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THEPVetoMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THEPVetoMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THEPVetoMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THEPVetoMCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THEPVetoMCHit::Class_Name()
{
   return "THEPVetoMCHit";
}

//______________________________________________________________________________
const char *THEPVetoMCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THEPVetoMCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THEPVetoMCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THEPVetoMCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoMCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THEPVetoRecoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THEPVetoRecoEvent::Class_Name()
{
   return "THEPVetoRecoEvent";
}

//______________________________________________________________________________
const char *THEPVetoRecoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoRecoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THEPVetoRecoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoRecoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THEPVetoRecoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoRecoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THEPVetoRecoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THEPVetoRecoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeadGlassMCDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeadGlassMCDigi::Class_Name()
{
   return "TLeadGlassMCDigi";
}

//______________________________________________________________________________
const char *TLeadGlassMCDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLeadGlassMCDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeadGlassMCDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeadGlassMCDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeadGlassMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeadGlassMCEvent::Class_Name()
{
   return "TLeadGlassMCEvent";
}

//______________________________________________________________________________
const char *TLeadGlassMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLeadGlassMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeadGlassMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeadGlassMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeadGlassMCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeadGlassMCHit::Class_Name()
{
   return "TLeadGlassMCHit";
}

//______________________________________________________________________________
const char *TLeadGlassMCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLeadGlassMCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeadGlassMCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeadGlassMCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassMCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeadGlassRecoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeadGlassRecoEvent::Class_Name()
{
   return "TLeadGlassRecoEvent";
}

//______________________________________________________________________________
const char *TLeadGlassRecoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassRecoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLeadGlassRecoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassRecoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeadGlassRecoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassRecoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeadGlassRecoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeadGlassRecoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCEvent::Class_Name()
{
   return "TMCEvent";
}

//______________________________________________________________________________
const char *TMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCParticle::Class_Name()
{
   return "TMCParticle";
}

//______________________________________________________________________________
const char *TMCParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCVertex::Class_Name()
{
   return "TMCVertex";
}

//______________________________________________________________________________
const char *TMCVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCTruthEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCTruthEvent::Class_Name()
{
   return "TMCTruthEvent";
}

//______________________________________________________________________________
const char *TMCTruthEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCTruthEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMCTruthEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCTruthEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCTruthEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCTruthEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCTruthEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCTruthEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMMChannel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMMChannel::Class_Name()
{
   return "TMMChannel";
}

//______________________________________________________________________________
const char *TMMChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMChannel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMMChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMChannel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMMChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMChannel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMMChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMChannel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMMBoard::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMMBoard::Class_Name()
{
   return "TMMBoard";
}

//______________________________________________________________________________
const char *TMMBoard::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMBoard*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMMBoard::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMBoard*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMMBoard::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMBoard*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMMBoard::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMBoard*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMMClusCollection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMMClusCollection::Class_Name()
{
   return "TMMClusCollection";
}

//______________________________________________________________________________
const char *TMMClusCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMClusCollection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMMClusCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMClusCollection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMMClusCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMClusCollection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMMClusCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMClusCollection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMMInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMMInfo::Class_Name()
{
   return "TMMInfo";
}

//______________________________________________________________________________
const char *TMMInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMMInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMMInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMMInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMMMCDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMMMCDigi::Class_Name()
{
   return "TMMMCDigi";
}

//______________________________________________________________________________
const char *TMMMCDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMMCDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMMMCDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMMCDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMMMCDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMMCDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMMMCDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMMCDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMMMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMMMCEvent::Class_Name()
{
   return "TMMMCEvent";
}

//______________________________________________________________________________
const char *TMMMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMMMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMMMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMMMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMMMCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMMMCHit::Class_Name()
{
   return "TMMMCHit";
}

//______________________________________________________________________________
const char *TMMMCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMMCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMMMCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMMCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMMMCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMMCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMMMCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMMCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMMRawEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMMRawEvent::Class_Name()
{
   return "TMMRawEvent";
}

//______________________________________________________________________________
const char *TMMRawEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMRawEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMMRawEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMRawEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMMRawEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMRawEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMMRawEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMRawEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMMRecoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMMRecoEvent::Class_Name()
{
   return "TMMRecoEvent";
}

//______________________________________________________________________________
const char *TMMRecoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMRecoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMMRecoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMMRecoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMMRecoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMRecoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMMRecoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMMRecoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPadmeRun::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPadmeRun::Class_Name()
{
   return "TPadmeRun";
}

//______________________________________________________________________________
const char *TPadmeRun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadmeRun*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPadmeRun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadmeRun*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPadmeRun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadmeRun*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPadmeRun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadmeRun*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPVetoClusCollection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPVetoClusCollection::Class_Name()
{
   return "TPVetoClusCollection";
}

//______________________________________________________________________________
const char *TPVetoClusCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPVetoClusCollection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPVetoClusCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPVetoClusCollection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPVetoClusCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPVetoClusCollection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPVetoClusCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPVetoClusCollection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPVetoMCDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPVetoMCDigi::Class_Name()
{
   return "TPVetoMCDigi";
}

//______________________________________________________________________________
const char *TPVetoMCDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPVetoMCDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPVetoMCDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPVetoMCDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPVetoMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPVetoMCEvent::Class_Name()
{
   return "TPVetoMCEvent";
}

//______________________________________________________________________________
const char *TPVetoMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPVetoMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPVetoMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPVetoMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPVetoMCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPVetoMCHit::Class_Name()
{
   return "TPVetoMCHit";
}

//______________________________________________________________________________
const char *TPVetoMCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPVetoMCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPVetoMCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPVetoMCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPVetoMCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPVetoRecoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPVetoRecoEvent::Class_Name()
{
   return "TPVetoRecoEvent";
}

//______________________________________________________________________________
const char *TPVetoRecoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPVetoRecoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPVetoRecoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPVetoRecoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPVetoRecoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPVetoRecoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPVetoRecoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPVetoRecoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTriggerInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTriggerInfo::Class_Name()
{
   return "TTriggerInfo";
}

//______________________________________________________________________________
const char *TTriggerInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTriggerInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTriggerInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTriggerInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTriggerInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTriggerInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTriggerInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTriggerInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRawEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRawEvent::Class_Name()
{
   return "TRawEvent";
}

//______________________________________________________________________________
const char *TRawEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRawEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRawEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRawEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRawEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRawEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRawEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRawEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRawMergedEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRawMergedEvent::Class_Name()
{
   return "TRawMergedEvent";
}

//______________________________________________________________________________
const char *TRawMergedEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRawMergedEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRawMergedEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRawMergedEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRawMergedEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRawMergedEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRawMergedEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRawMergedEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRecoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRecoEvent::Class_Name()
{
   return "TRecoEvent";
}

//______________________________________________________________________________
const char *TRecoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRecoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRecoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRecoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRecoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRecoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSACClusCollection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSACClusCollection::Class_Name()
{
   return "TSACClusCollection";
}

//______________________________________________________________________________
const char *TSACClusCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSACClusCollection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSACClusCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSACClusCollection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSACClusCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSACClusCollection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSACClusCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSACClusCollection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSACMCDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSACMCDigi::Class_Name()
{
   return "TSACMCDigi";
}

//______________________________________________________________________________
const char *TSACMCDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSACMCDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSACMCDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSACMCDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSACMCDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSACMCDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSACMCDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSACMCDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSACMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSACMCEvent::Class_Name()
{
   return "TSACMCEvent";
}

//______________________________________________________________________________
const char *TSACMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSACMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSACMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSACMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSACMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSACMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSACMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSACMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSACMCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSACMCHit::Class_Name()
{
   return "TSACMCHit";
}

//______________________________________________________________________________
const char *TSACMCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSACMCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSACMCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSACMCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSACMCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSACMCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSACMCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSACMCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSACRecoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSACRecoEvent::Class_Name()
{
   return "TSACRecoEvent";
}

//______________________________________________________________________________
const char *TSACRecoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSACRecoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSACRecoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSACRecoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSACRecoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSACRecoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSACRecoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSACRecoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTargetSignalFitParams::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTargetSignalFitParams::Class_Name()
{
   return "TTargetSignalFitParams";
}

//______________________________________________________________________________
const char *TTargetSignalFitParams::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetSignalFitParams*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTargetSignalFitParams::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetSignalFitParams*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTargetSignalFitParams::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetSignalFitParams*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTargetSignalFitParams::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetSignalFitParams*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTargetFitEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTargetFitEvent::Class_Name()
{
   return "TTargetFitEvent";
}

//______________________________________________________________________________
const char *TTargetFitEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetFitEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTargetFitEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetFitEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTargetFitEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetFitEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTargetFitEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetFitEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTargetMCDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTargetMCDigi::Class_Name()
{
   return "TTargetMCDigi";
}

//______________________________________________________________________________
const char *TTargetMCDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTargetMCDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTargetMCDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTargetMCDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTargetMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTargetMCEvent::Class_Name()
{
   return "TTargetMCEvent";
}

//______________________________________________________________________________
const char *TTargetMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTargetMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTargetMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTargetMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTargetMCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTargetMCHit::Class_Name()
{
   return "TTargetMCHit";
}

//______________________________________________________________________________
const char *TTargetMCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTargetMCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTargetMCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTargetMCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetMCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTargetRecoBeam::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTargetRecoBeam::Class_Name()
{
   return "TTargetRecoBeam";
}

//______________________________________________________________________________
const char *TTargetRecoBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetRecoBeam*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTargetRecoBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetRecoBeam*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTargetRecoBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetRecoBeam*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTargetRecoBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetRecoBeam*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTargetRecoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTargetRecoEvent::Class_Name()
{
   return "TTargetRecoEvent";
}

//______________________________________________________________________________
const char *TTargetRecoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetRecoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTargetRecoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTargetRecoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTargetRecoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetRecoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTargetRecoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTargetRecoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTPixMCDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTPixMCDigi::Class_Name()
{
   return "TTPixMCDigi";
}

//______________________________________________________________________________
const char *TTPixMCDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTPixMCDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTPixMCDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTPixMCDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTPixMCEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTPixMCEvent::Class_Name()
{
   return "TTPixMCEvent";
}

//______________________________________________________________________________
const char *TTPixMCEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTPixMCEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTPixMCEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTPixMCEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTPixMCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTPixMCHit::Class_Name()
{
   return "TTPixMCHit";
}

//______________________________________________________________________________
const char *TTPixMCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTPixMCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTPixMCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTPixMCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTPixMCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TADCChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TADCChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TADCChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TADCChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TADCChannel(void *p) {
      return  p ? new(p) ::TADCChannel : new ::TADCChannel;
   }
   static void *newArray_TADCChannel(Long_t nElements, void *p) {
      return p ? new(p) ::TADCChannel[nElements] : new ::TADCChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TADCChannel(void *p) {
      delete (static_cast<::TADCChannel*>(p));
   }
   static void deleteArray_TADCChannel(void *p) {
      delete [] (static_cast<::TADCChannel*>(p));
   }
   static void destruct_TADCChannel(void *p) {
      typedef ::TADCChannel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TADCChannel

//______________________________________________________________________________
void TADCTrigger::Streamer(TBuffer &R__b)
{
   // Stream an object of class TADCTrigger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TADCTrigger::Class(),this);
   } else {
      R__b.WriteClassBuffer(TADCTrigger::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TADCTrigger(void *p) {
      return  p ? new(p) ::TADCTrigger : new ::TADCTrigger;
   }
   static void *newArray_TADCTrigger(Long_t nElements, void *p) {
      return p ? new(p) ::TADCTrigger[nElements] : new ::TADCTrigger[nElements];
   }
   // Wrapper around operator delete
   static void delete_TADCTrigger(void *p) {
      delete (static_cast<::TADCTrigger*>(p));
   }
   static void deleteArray_TADCTrigger(void *p) {
      delete [] (static_cast<::TADCTrigger*>(p));
   }
   static void destruct_TADCTrigger(void *p) {
      typedef ::TADCTrigger current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TADCTrigger

//______________________________________________________________________________
void TADCBoard::Streamer(TBuffer &R__b)
{
   // Stream an object of class TADCBoard.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TADCBoard::Class(),this);
   } else {
      R__b.WriteClassBuffer(TADCBoard::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TADCBoard(void *p) {
      return  p ? new(p) ::TADCBoard : new ::TADCBoard;
   }
   static void *newArray_TADCBoard(Long_t nElements, void *p) {
      return p ? new(p) ::TADCBoard[nElements] : new ::TADCBoard[nElements];
   }
   // Wrapper around operator delete
   static void delete_TADCBoard(void *p) {
      delete (static_cast<::TADCBoard*>(p));
   }
   static void deleteArray_TADCBoard(void *p) {
      delete [] (static_cast<::TADCBoard*>(p));
   }
   static void destruct_TADCBoard(void *p) {
      typedef ::TADCBoard current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TADCBoard

//______________________________________________________________________________
void TSubDetectorInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSubDetectorInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSubDetectorInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSubDetectorInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSubDetectorInfo(void *p) {
      return  p ? new(p) ::TSubDetectorInfo : new ::TSubDetectorInfo;
   }
   static void *newArray_TSubDetectorInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TSubDetectorInfo[nElements] : new ::TSubDetectorInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSubDetectorInfo(void *p) {
      delete (static_cast<::TSubDetectorInfo*>(p));
   }
   static void deleteArray_TSubDetectorInfo(void *p) {
      delete [] (static_cast<::TSubDetectorInfo*>(p));
   }
   static void destruct_TSubDetectorInfo(void *p) {
      typedef ::TSubDetectorInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSubDetectorInfo

//______________________________________________________________________________
void TDetectorInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDetectorInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDetectorInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDetectorInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDetectorInfo(void *p) {
      return  p ? new(p) ::TDetectorInfo : new ::TDetectorInfo;
   }
   static void *newArray_TDetectorInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TDetectorInfo[nElements] : new ::TDetectorInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDetectorInfo(void *p) {
      delete (static_cast<::TDetectorInfo*>(p));
   }
   static void deleteArray_TDetectorInfo(void *p) {
      delete [] (static_cast<::TDetectorInfo*>(p));
   }
   static void destruct_TDetectorInfo(void *p) {
      typedef ::TDetectorInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDetectorInfo

//______________________________________________________________________________
void TMCVHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCVHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCVHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCVHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMCVHit(void *p) {
      return  p ? new(p) ::TMCVHit : new ::TMCVHit;
   }
   static void *newArray_TMCVHit(Long_t nElements, void *p) {
      return p ? new(p) ::TMCVHit[nElements] : new ::TMCVHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMCVHit(void *p) {
      delete (static_cast<::TMCVHit*>(p));
   }
   static void deleteArray_TMCVHit(void *p) {
      delete [] (static_cast<::TMCVHit*>(p));
   }
   static void destruct_TMCVHit(void *p) {
      typedef ::TMCVHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCVHit

//______________________________________________________________________________
void TRecoVCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecoVCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRecoVCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRecoVCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRecoVCluster(void *p) {
      return  p ? new(p) ::TRecoVCluster : new ::TRecoVCluster;
   }
   static void *newArray_TRecoVCluster(Long_t nElements, void *p) {
      return p ? new(p) ::TRecoVCluster[nElements] : new ::TRecoVCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRecoVCluster(void *p) {
      delete (static_cast<::TRecoVCluster*>(p));
   }
   static void deleteArray_TRecoVCluster(void *p) {
      delete [] (static_cast<::TRecoVCluster*>(p));
   }
   static void destruct_TRecoVCluster(void *p) {
      typedef ::TRecoVCluster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TRecoVCluster

//______________________________________________________________________________
void TRecoVClusCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecoVClusCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRecoVClusCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRecoVClusCollection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRecoVClusCollection(void *p) {
      return  p ? new(p) ::TRecoVClusCollection : new ::TRecoVClusCollection;
   }
   static void *newArray_TRecoVClusCollection(Long_t nElements, void *p) {
      return p ? new(p) ::TRecoVClusCollection[nElements] : new ::TRecoVClusCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRecoVClusCollection(void *p) {
      delete (static_cast<::TRecoVClusCollection*>(p));
   }
   static void deleteArray_TRecoVClusCollection(void *p) {
      delete [] (static_cast<::TRecoVClusCollection*>(p));
   }
   static void destruct_TRecoVClusCollection(void *p) {
      typedef ::TRecoVClusCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TRecoVClusCollection

//______________________________________________________________________________
void TECalClusCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TECalClusCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TECalClusCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TECalClusCollection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TECalClusCollection(void *p) {
      return  p ? new(p) ::TECalClusCollection : new ::TECalClusCollection;
   }
   static void *newArray_TECalClusCollection(Long_t nElements, void *p) {
      return p ? new(p) ::TECalClusCollection[nElements] : new ::TECalClusCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TECalClusCollection(void *p) {
      delete (static_cast<::TECalClusCollection*>(p));
   }
   static void deleteArray_TECalClusCollection(void *p) {
      delete [] (static_cast<::TECalClusCollection*>(p));
   }
   static void destruct_TECalClusCollection(void *p) {
      typedef ::TECalClusCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TECalClusCollection

//______________________________________________________________________________
void TMCVDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCVDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCVDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCVDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMCVDigi(void *p) {
      return  p ? new(p) ::TMCVDigi : new ::TMCVDigi;
   }
   static void *newArray_TMCVDigi(Long_t nElements, void *p) {
      return p ? new(p) ::TMCVDigi[nElements] : new ::TMCVDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMCVDigi(void *p) {
      delete (static_cast<::TMCVDigi*>(p));
   }
   static void deleteArray_TMCVDigi(void *p) {
      delete [] (static_cast<::TMCVDigi*>(p));
   }
   static void destruct_TMCVDigi(void *p) {
      typedef ::TMCVDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCVDigi

//______________________________________________________________________________
void TECalMCDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TECalMCDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TECalMCDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TECalMCDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TECalMCDigi(void *p) {
      return  p ? new(p) ::TECalMCDigi : new ::TECalMCDigi;
   }
   static void *newArray_TECalMCDigi(Long_t nElements, void *p) {
      return p ? new(p) ::TECalMCDigi[nElements] : new ::TECalMCDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TECalMCDigi(void *p) {
      delete (static_cast<::TECalMCDigi*>(p));
   }
   static void deleteArray_TECalMCDigi(void *p) {
      delete [] (static_cast<::TECalMCDigi*>(p));
   }
   static void destruct_TECalMCDigi(void *p) {
      typedef ::TECalMCDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TECalMCDigi

//______________________________________________________________________________
void TMCVEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCVEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCVEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCVEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMCVEvent(void *p) {
      return  p ? new(p) ::TMCVEvent : new ::TMCVEvent;
   }
   static void *newArray_TMCVEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TMCVEvent[nElements] : new ::TMCVEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMCVEvent(void *p) {
      delete (static_cast<::TMCVEvent*>(p));
   }
   static void deleteArray_TMCVEvent(void *p) {
      delete [] (static_cast<::TMCVEvent*>(p));
   }
   static void destruct_TMCVEvent(void *p) {
      typedef ::TMCVEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCVEvent

//______________________________________________________________________________
void TECalMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TECalMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TECalMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TECalMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TECalMCEvent(void *p) {
      return  p ? new(p) ::TECalMCEvent : new ::TECalMCEvent;
   }
   static void *newArray_TECalMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TECalMCEvent[nElements] : new ::TECalMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TECalMCEvent(void *p) {
      delete (static_cast<::TECalMCEvent*>(p));
   }
   static void deleteArray_TECalMCEvent(void *p) {
      delete [] (static_cast<::TECalMCEvent*>(p));
   }
   static void destruct_TECalMCEvent(void *p) {
      typedef ::TECalMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TECalMCEvent

//______________________________________________________________________________
void TECalMCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TECalMCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TECalMCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TECalMCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TECalMCHit(void *p) {
      return  p ? new(p) ::TECalMCHit : new ::TECalMCHit;
   }
   static void *newArray_TECalMCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TECalMCHit[nElements] : new ::TECalMCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TECalMCHit(void *p) {
      delete (static_cast<::TECalMCHit*>(p));
   }
   static void deleteArray_TECalMCHit(void *p) {
      delete [] (static_cast<::TECalMCHit*>(p));
   }
   static void destruct_TECalMCHit(void *p) {
      typedef ::TECalMCHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TECalMCHit

//______________________________________________________________________________
void TRecoVHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecoVHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRecoVHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRecoVHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRecoVHit(void *p) {
      return  p ? new(p) ::TRecoVHit : new ::TRecoVHit;
   }
   static void *newArray_TRecoVHit(Long_t nElements, void *p) {
      return p ? new(p) ::TRecoVHit[nElements] : new ::TRecoVHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRecoVHit(void *p) {
      delete (static_cast<::TRecoVHit*>(p));
   }
   static void deleteArray_TRecoVHit(void *p) {
      delete [] (static_cast<::TRecoVHit*>(p));
   }
   static void destruct_TRecoVHit(void *p) {
      typedef ::TRecoVHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TRecoVHit

//______________________________________________________________________________
void TRecoVObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecoVObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRecoVObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRecoVObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRecoVObject(void *p) {
      return  p ? new(p) ::TRecoVObject : new ::TRecoVObject;
   }
   static void *newArray_TRecoVObject(Long_t nElements, void *p) {
      return p ? new(p) ::TRecoVObject[nElements] : new ::TRecoVObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRecoVObject(void *p) {
      delete (static_cast<::TRecoVObject*>(p));
   }
   static void deleteArray_TRecoVObject(void *p) {
      delete [] (static_cast<::TRecoVObject*>(p));
   }
   static void destruct_TRecoVObject(void *p) {
      typedef ::TRecoVObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TRecoVObject

//______________________________________________________________________________
void TECalRecoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TECalRecoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TECalRecoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TECalRecoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TECalRecoEvent(void *p) {
      return  p ? new(p) ::TECalRecoEvent : new ::TECalRecoEvent;
   }
   static void *newArray_TECalRecoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TECalRecoEvent[nElements] : new ::TECalRecoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TECalRecoEvent(void *p) {
      delete (static_cast<::TECalRecoEvent*>(p));
   }
   static void deleteArray_TECalRecoEvent(void *p) {
      delete [] (static_cast<::TECalRecoEvent*>(p));
   }
   static void destruct_TECalRecoEvent(void *p) {
      typedef ::TECalRecoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TECalRecoEvent

//______________________________________________________________________________
void TETagClusCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TETagClusCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TETagClusCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TETagClusCollection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TETagClusCollection(void *p) {
      return  p ? new(p) ::TETagClusCollection : new ::TETagClusCollection;
   }
   static void *newArray_TETagClusCollection(Long_t nElements, void *p) {
      return p ? new(p) ::TETagClusCollection[nElements] : new ::TETagClusCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TETagClusCollection(void *p) {
      delete (static_cast<::TETagClusCollection*>(p));
   }
   static void deleteArray_TETagClusCollection(void *p) {
      delete [] (static_cast<::TETagClusCollection*>(p));
   }
   static void destruct_TETagClusCollection(void *p) {
      typedef ::TETagClusCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TETagClusCollection

//______________________________________________________________________________
void TETagMCDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TETagMCDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TETagMCDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TETagMCDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TETagMCDigi(void *p) {
      return  p ? new(p) ::TETagMCDigi : new ::TETagMCDigi;
   }
   static void *newArray_TETagMCDigi(Long_t nElements, void *p) {
      return p ? new(p) ::TETagMCDigi[nElements] : new ::TETagMCDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TETagMCDigi(void *p) {
      delete (static_cast<::TETagMCDigi*>(p));
   }
   static void deleteArray_TETagMCDigi(void *p) {
      delete [] (static_cast<::TETagMCDigi*>(p));
   }
   static void destruct_TETagMCDigi(void *p) {
      typedef ::TETagMCDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TETagMCDigi

//______________________________________________________________________________
void TETagMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TETagMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TETagMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TETagMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TETagMCEvent(void *p) {
      return  p ? new(p) ::TETagMCEvent : new ::TETagMCEvent;
   }
   static void *newArray_TETagMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TETagMCEvent[nElements] : new ::TETagMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TETagMCEvent(void *p) {
      delete (static_cast<::TETagMCEvent*>(p));
   }
   static void deleteArray_TETagMCEvent(void *p) {
      delete [] (static_cast<::TETagMCEvent*>(p));
   }
   static void destruct_TETagMCEvent(void *p) {
      typedef ::TETagMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TETagMCEvent

//______________________________________________________________________________
void TETagMCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TETagMCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TETagMCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TETagMCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TETagMCHit(void *p) {
      return  p ? new(p) ::TETagMCHit : new ::TETagMCHit;
   }
   static void *newArray_TETagMCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TETagMCHit[nElements] : new ::TETagMCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TETagMCHit(void *p) {
      delete (static_cast<::TETagMCHit*>(p));
   }
   static void deleteArray_TETagMCHit(void *p) {
      delete [] (static_cast<::TETagMCHit*>(p));
   }
   static void destruct_TETagMCHit(void *p) {
      typedef ::TETagMCHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TETagMCHit

//______________________________________________________________________________
void TETagRecoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TETagRecoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TETagRecoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TETagRecoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TETagRecoEvent(void *p) {
      return  p ? new(p) ::TETagRecoEvent : new ::TETagRecoEvent;
   }
   static void *newArray_TETagRecoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TETagRecoEvent[nElements] : new ::TETagRecoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TETagRecoEvent(void *p) {
      delete (static_cast<::TETagRecoEvent*>(p));
   }
   static void deleteArray_TETagRecoEvent(void *p) {
      delete [] (static_cast<::TETagRecoEvent*>(p));
   }
   static void destruct_TETagRecoEvent(void *p) {
      typedef ::TETagRecoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TETagRecoEvent

//______________________________________________________________________________
void TEVetoClusCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEVetoClusCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEVetoClusCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEVetoClusCollection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEVetoClusCollection(void *p) {
      return  p ? new(p) ::TEVetoClusCollection : new ::TEVetoClusCollection;
   }
   static void *newArray_TEVetoClusCollection(Long_t nElements, void *p) {
      return p ? new(p) ::TEVetoClusCollection[nElements] : new ::TEVetoClusCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEVetoClusCollection(void *p) {
      delete (static_cast<::TEVetoClusCollection*>(p));
   }
   static void deleteArray_TEVetoClusCollection(void *p) {
      delete [] (static_cast<::TEVetoClusCollection*>(p));
   }
   static void destruct_TEVetoClusCollection(void *p) {
      typedef ::TEVetoClusCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEVetoClusCollection

//______________________________________________________________________________
void TEVetoMCDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEVetoMCDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEVetoMCDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEVetoMCDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEVetoMCDigi(void *p) {
      return  p ? new(p) ::TEVetoMCDigi : new ::TEVetoMCDigi;
   }
   static void *newArray_TEVetoMCDigi(Long_t nElements, void *p) {
      return p ? new(p) ::TEVetoMCDigi[nElements] : new ::TEVetoMCDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEVetoMCDigi(void *p) {
      delete (static_cast<::TEVetoMCDigi*>(p));
   }
   static void deleteArray_TEVetoMCDigi(void *p) {
      delete [] (static_cast<::TEVetoMCDigi*>(p));
   }
   static void destruct_TEVetoMCDigi(void *p) {
      typedef ::TEVetoMCDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEVetoMCDigi

//______________________________________________________________________________
void TEVetoMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEVetoMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEVetoMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEVetoMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEVetoMCEvent(void *p) {
      return  p ? new(p) ::TEVetoMCEvent : new ::TEVetoMCEvent;
   }
   static void *newArray_TEVetoMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TEVetoMCEvent[nElements] : new ::TEVetoMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEVetoMCEvent(void *p) {
      delete (static_cast<::TEVetoMCEvent*>(p));
   }
   static void deleteArray_TEVetoMCEvent(void *p) {
      delete [] (static_cast<::TEVetoMCEvent*>(p));
   }
   static void destruct_TEVetoMCEvent(void *p) {
      typedef ::TEVetoMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEVetoMCEvent

//______________________________________________________________________________
void TEVetoMCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEVetoMCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEVetoMCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEVetoMCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEVetoMCHit(void *p) {
      return  p ? new(p) ::TEVetoMCHit : new ::TEVetoMCHit;
   }
   static void *newArray_TEVetoMCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TEVetoMCHit[nElements] : new ::TEVetoMCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEVetoMCHit(void *p) {
      delete (static_cast<::TEVetoMCHit*>(p));
   }
   static void deleteArray_TEVetoMCHit(void *p) {
      delete [] (static_cast<::TEVetoMCHit*>(p));
   }
   static void destruct_TEVetoMCHit(void *p) {
      typedef ::TEVetoMCHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEVetoMCHit

//______________________________________________________________________________
void TEVetoRecoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEVetoRecoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEVetoRecoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEVetoRecoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEVetoRecoEvent(void *p) {
      return  p ? new(p) ::TEVetoRecoEvent : new ::TEVetoRecoEvent;
   }
   static void *newArray_TEVetoRecoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TEVetoRecoEvent[nElements] : new ::TEVetoRecoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEVetoRecoEvent(void *p) {
      delete (static_cast<::TEVetoRecoEvent*>(p));
   }
   static void deleteArray_TEVetoRecoEvent(void *p) {
      delete [] (static_cast<::TEVetoRecoEvent*>(p));
   }
   static void destruct_TEVetoRecoEvent(void *p) {
      typedef ::TEVetoRecoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEVetoRecoEvent

//______________________________________________________________________________
void THEPVetoClusCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class THEPVetoClusCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THEPVetoClusCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(THEPVetoClusCollection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THEPVetoClusCollection(void *p) {
      return  p ? new(p) ::THEPVetoClusCollection : new ::THEPVetoClusCollection;
   }
   static void *newArray_THEPVetoClusCollection(Long_t nElements, void *p) {
      return p ? new(p) ::THEPVetoClusCollection[nElements] : new ::THEPVetoClusCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_THEPVetoClusCollection(void *p) {
      delete (static_cast<::THEPVetoClusCollection*>(p));
   }
   static void deleteArray_THEPVetoClusCollection(void *p) {
      delete [] (static_cast<::THEPVetoClusCollection*>(p));
   }
   static void destruct_THEPVetoClusCollection(void *p) {
      typedef ::THEPVetoClusCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::THEPVetoClusCollection

//______________________________________________________________________________
void THEPVetoMCDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class THEPVetoMCDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THEPVetoMCDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(THEPVetoMCDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THEPVetoMCDigi(void *p) {
      return  p ? new(p) ::THEPVetoMCDigi : new ::THEPVetoMCDigi;
   }
   static void *newArray_THEPVetoMCDigi(Long_t nElements, void *p) {
      return p ? new(p) ::THEPVetoMCDigi[nElements] : new ::THEPVetoMCDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_THEPVetoMCDigi(void *p) {
      delete (static_cast<::THEPVetoMCDigi*>(p));
   }
   static void deleteArray_THEPVetoMCDigi(void *p) {
      delete [] (static_cast<::THEPVetoMCDigi*>(p));
   }
   static void destruct_THEPVetoMCDigi(void *p) {
      typedef ::THEPVetoMCDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::THEPVetoMCDigi

//______________________________________________________________________________
void THEPVetoMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class THEPVetoMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THEPVetoMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(THEPVetoMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THEPVetoMCEvent(void *p) {
      return  p ? new(p) ::THEPVetoMCEvent : new ::THEPVetoMCEvent;
   }
   static void *newArray_THEPVetoMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::THEPVetoMCEvent[nElements] : new ::THEPVetoMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_THEPVetoMCEvent(void *p) {
      delete (static_cast<::THEPVetoMCEvent*>(p));
   }
   static void deleteArray_THEPVetoMCEvent(void *p) {
      delete [] (static_cast<::THEPVetoMCEvent*>(p));
   }
   static void destruct_THEPVetoMCEvent(void *p) {
      typedef ::THEPVetoMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::THEPVetoMCEvent

//______________________________________________________________________________
void THEPVetoMCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class THEPVetoMCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THEPVetoMCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(THEPVetoMCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THEPVetoMCHit(void *p) {
      return  p ? new(p) ::THEPVetoMCHit : new ::THEPVetoMCHit;
   }
   static void *newArray_THEPVetoMCHit(Long_t nElements, void *p) {
      return p ? new(p) ::THEPVetoMCHit[nElements] : new ::THEPVetoMCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_THEPVetoMCHit(void *p) {
      delete (static_cast<::THEPVetoMCHit*>(p));
   }
   static void deleteArray_THEPVetoMCHit(void *p) {
      delete [] (static_cast<::THEPVetoMCHit*>(p));
   }
   static void destruct_THEPVetoMCHit(void *p) {
      typedef ::THEPVetoMCHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::THEPVetoMCHit

//______________________________________________________________________________
void THEPVetoRecoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class THEPVetoRecoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THEPVetoRecoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(THEPVetoRecoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THEPVetoRecoEvent(void *p) {
      return  p ? new(p) ::THEPVetoRecoEvent : new ::THEPVetoRecoEvent;
   }
   static void *newArray_THEPVetoRecoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::THEPVetoRecoEvent[nElements] : new ::THEPVetoRecoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_THEPVetoRecoEvent(void *p) {
      delete (static_cast<::THEPVetoRecoEvent*>(p));
   }
   static void deleteArray_THEPVetoRecoEvent(void *p) {
      delete [] (static_cast<::THEPVetoRecoEvent*>(p));
   }
   static void destruct_THEPVetoRecoEvent(void *p) {
      typedef ::THEPVetoRecoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::THEPVetoRecoEvent

//______________________________________________________________________________
void TLeadGlassMCDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeadGlassMCDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeadGlassMCDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeadGlassMCDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeadGlassMCDigi(void *p) {
      return  p ? new(p) ::TLeadGlassMCDigi : new ::TLeadGlassMCDigi;
   }
   static void *newArray_TLeadGlassMCDigi(Long_t nElements, void *p) {
      return p ? new(p) ::TLeadGlassMCDigi[nElements] : new ::TLeadGlassMCDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeadGlassMCDigi(void *p) {
      delete (static_cast<::TLeadGlassMCDigi*>(p));
   }
   static void deleteArray_TLeadGlassMCDigi(void *p) {
      delete [] (static_cast<::TLeadGlassMCDigi*>(p));
   }
   static void destruct_TLeadGlassMCDigi(void *p) {
      typedef ::TLeadGlassMCDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TLeadGlassMCDigi

//______________________________________________________________________________
void TLeadGlassMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeadGlassMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeadGlassMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeadGlassMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeadGlassMCEvent(void *p) {
      return  p ? new(p) ::TLeadGlassMCEvent : new ::TLeadGlassMCEvent;
   }
   static void *newArray_TLeadGlassMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TLeadGlassMCEvent[nElements] : new ::TLeadGlassMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeadGlassMCEvent(void *p) {
      delete (static_cast<::TLeadGlassMCEvent*>(p));
   }
   static void deleteArray_TLeadGlassMCEvent(void *p) {
      delete [] (static_cast<::TLeadGlassMCEvent*>(p));
   }
   static void destruct_TLeadGlassMCEvent(void *p) {
      typedef ::TLeadGlassMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TLeadGlassMCEvent

//______________________________________________________________________________
void TLeadGlassMCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeadGlassMCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeadGlassMCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeadGlassMCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeadGlassMCHit(void *p) {
      return  p ? new(p) ::TLeadGlassMCHit : new ::TLeadGlassMCHit;
   }
   static void *newArray_TLeadGlassMCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TLeadGlassMCHit[nElements] : new ::TLeadGlassMCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeadGlassMCHit(void *p) {
      delete (static_cast<::TLeadGlassMCHit*>(p));
   }
   static void deleteArray_TLeadGlassMCHit(void *p) {
      delete [] (static_cast<::TLeadGlassMCHit*>(p));
   }
   static void destruct_TLeadGlassMCHit(void *p) {
      typedef ::TLeadGlassMCHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TLeadGlassMCHit

//______________________________________________________________________________
void TLeadGlassRecoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeadGlassRecoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeadGlassRecoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeadGlassRecoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeadGlassRecoEvent(void *p) {
      return  p ? new(p) ::TLeadGlassRecoEvent : new ::TLeadGlassRecoEvent;
   }
   static void *newArray_TLeadGlassRecoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TLeadGlassRecoEvent[nElements] : new ::TLeadGlassRecoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeadGlassRecoEvent(void *p) {
      delete (static_cast<::TLeadGlassRecoEvent*>(p));
   }
   static void deleteArray_TLeadGlassRecoEvent(void *p) {
      delete [] (static_cast<::TLeadGlassRecoEvent*>(p));
   }
   static void destruct_TLeadGlassRecoEvent(void *p) {
      typedef ::TLeadGlassRecoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TLeadGlassRecoEvent

//______________________________________________________________________________
void TMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMCEvent(void *p) {
      return  p ? new(p) ::TMCEvent : new ::TMCEvent;
   }
   static void *newArray_TMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TMCEvent[nElements] : new ::TMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMCEvent(void *p) {
      delete (static_cast<::TMCEvent*>(p));
   }
   static void deleteArray_TMCEvent(void *p) {
      delete [] (static_cast<::TMCEvent*>(p));
   }
   static void destruct_TMCEvent(void *p) {
      typedef ::TMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCEvent

//______________________________________________________________________________
void TMCParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMCParticle(void *p) {
      return  p ? new(p) ::TMCParticle : new ::TMCParticle;
   }
   static void *newArray_TMCParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TMCParticle[nElements] : new ::TMCParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMCParticle(void *p) {
      delete (static_cast<::TMCParticle*>(p));
   }
   static void deleteArray_TMCParticle(void *p) {
      delete [] (static_cast<::TMCParticle*>(p));
   }
   static void destruct_TMCParticle(void *p) {
      typedef ::TMCParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCParticle

//______________________________________________________________________________
void TMCVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMCVertex(void *p) {
      return  p ? new(p) ::TMCVertex : new ::TMCVertex;
   }
   static void *newArray_TMCVertex(Long_t nElements, void *p) {
      return p ? new(p) ::TMCVertex[nElements] : new ::TMCVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMCVertex(void *p) {
      delete (static_cast<::TMCVertex*>(p));
   }
   static void deleteArray_TMCVertex(void *p) {
      delete [] (static_cast<::TMCVertex*>(p));
   }
   static void destruct_TMCVertex(void *p) {
      typedef ::TMCVertex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCVertex

//______________________________________________________________________________
void TMCTruthEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCTruthEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCTruthEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCTruthEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMCTruthEvent(void *p) {
      return  p ? new(p) ::TMCTruthEvent : new ::TMCTruthEvent;
   }
   static void *newArray_TMCTruthEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TMCTruthEvent[nElements] : new ::TMCTruthEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMCTruthEvent(void *p) {
      delete (static_cast<::TMCTruthEvent*>(p));
   }
   static void deleteArray_TMCTruthEvent(void *p) {
      delete [] (static_cast<::TMCTruthEvent*>(p));
   }
   static void destruct_TMCTruthEvent(void *p) {
      typedef ::TMCTruthEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMCTruthEvent

//______________________________________________________________________________
void TMMChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMMChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMMChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMMChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMMChannel(void *p) {
      return  p ? new(p) ::TMMChannel : new ::TMMChannel;
   }
   static void *newArray_TMMChannel(Long_t nElements, void *p) {
      return p ? new(p) ::TMMChannel[nElements] : new ::TMMChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMMChannel(void *p) {
      delete (static_cast<::TMMChannel*>(p));
   }
   static void deleteArray_TMMChannel(void *p) {
      delete [] (static_cast<::TMMChannel*>(p));
   }
   static void destruct_TMMChannel(void *p) {
      typedef ::TMMChannel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMMChannel

//______________________________________________________________________________
void TMMBoard::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMMBoard.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMMBoard::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMMBoard::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMMBoard(void *p) {
      return  p ? new(p) ::TMMBoard : new ::TMMBoard;
   }
   static void *newArray_TMMBoard(Long_t nElements, void *p) {
      return p ? new(p) ::TMMBoard[nElements] : new ::TMMBoard[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMMBoard(void *p) {
      delete (static_cast<::TMMBoard*>(p));
   }
   static void deleteArray_TMMBoard(void *p) {
      delete [] (static_cast<::TMMBoard*>(p));
   }
   static void destruct_TMMBoard(void *p) {
      typedef ::TMMBoard current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMMBoard

//______________________________________________________________________________
void TMMClusCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMMClusCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMMClusCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMMClusCollection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMMClusCollection(void *p) {
      return  p ? new(p) ::TMMClusCollection : new ::TMMClusCollection;
   }
   static void *newArray_TMMClusCollection(Long_t nElements, void *p) {
      return p ? new(p) ::TMMClusCollection[nElements] : new ::TMMClusCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMMClusCollection(void *p) {
      delete (static_cast<::TMMClusCollection*>(p));
   }
   static void deleteArray_TMMClusCollection(void *p) {
      delete [] (static_cast<::TMMClusCollection*>(p));
   }
   static void destruct_TMMClusCollection(void *p) {
      typedef ::TMMClusCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMMClusCollection

//______________________________________________________________________________
void TMMInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMMInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMMInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMMInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMMInfo(void *p) {
      return  p ? new(p) ::TMMInfo : new ::TMMInfo;
   }
   static void *newArray_TMMInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TMMInfo[nElements] : new ::TMMInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMMInfo(void *p) {
      delete (static_cast<::TMMInfo*>(p));
   }
   static void deleteArray_TMMInfo(void *p) {
      delete [] (static_cast<::TMMInfo*>(p));
   }
   static void destruct_TMMInfo(void *p) {
      typedef ::TMMInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMMInfo

//______________________________________________________________________________
void TMMMCDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMMMCDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMMMCDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMMMCDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMMMCDigi(void *p) {
      return  p ? new(p) ::TMMMCDigi : new ::TMMMCDigi;
   }
   static void *newArray_TMMMCDigi(Long_t nElements, void *p) {
      return p ? new(p) ::TMMMCDigi[nElements] : new ::TMMMCDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMMMCDigi(void *p) {
      delete (static_cast<::TMMMCDigi*>(p));
   }
   static void deleteArray_TMMMCDigi(void *p) {
      delete [] (static_cast<::TMMMCDigi*>(p));
   }
   static void destruct_TMMMCDigi(void *p) {
      typedef ::TMMMCDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMMMCDigi

//______________________________________________________________________________
void TMMMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMMMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMMMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMMMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMMMCEvent(void *p) {
      return  p ? new(p) ::TMMMCEvent : new ::TMMMCEvent;
   }
   static void *newArray_TMMMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TMMMCEvent[nElements] : new ::TMMMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMMMCEvent(void *p) {
      delete (static_cast<::TMMMCEvent*>(p));
   }
   static void deleteArray_TMMMCEvent(void *p) {
      delete [] (static_cast<::TMMMCEvent*>(p));
   }
   static void destruct_TMMMCEvent(void *p) {
      typedef ::TMMMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMMMCEvent

//______________________________________________________________________________
void TMMMCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMMMCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMMMCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMMMCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMMMCHit(void *p) {
      return  p ? new(p) ::TMMMCHit : new ::TMMMCHit;
   }
   static void *newArray_TMMMCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TMMMCHit[nElements] : new ::TMMMCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMMMCHit(void *p) {
      delete (static_cast<::TMMMCHit*>(p));
   }
   static void deleteArray_TMMMCHit(void *p) {
      delete [] (static_cast<::TMMMCHit*>(p));
   }
   static void destruct_TMMMCHit(void *p) {
      typedef ::TMMMCHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMMMCHit

//______________________________________________________________________________
void TMMRawEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMMRawEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMMRawEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMMRawEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMMRawEvent(void *p) {
      return  p ? new(p) ::TMMRawEvent : new ::TMMRawEvent;
   }
   static void *newArray_TMMRawEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TMMRawEvent[nElements] : new ::TMMRawEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMMRawEvent(void *p) {
      delete (static_cast<::TMMRawEvent*>(p));
   }
   static void deleteArray_TMMRawEvent(void *p) {
      delete [] (static_cast<::TMMRawEvent*>(p));
   }
   static void destruct_TMMRawEvent(void *p) {
      typedef ::TMMRawEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMMRawEvent

//______________________________________________________________________________
void TMMRecoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMMRecoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMMRecoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMMRecoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMMRecoEvent(void *p) {
      return  p ? new(p) ::TMMRecoEvent : new ::TMMRecoEvent;
   }
   static void *newArray_TMMRecoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TMMRecoEvent[nElements] : new ::TMMRecoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMMRecoEvent(void *p) {
      delete (static_cast<::TMMRecoEvent*>(p));
   }
   static void deleteArray_TMMRecoEvent(void *p) {
      delete [] (static_cast<::TMMRecoEvent*>(p));
   }
   static void destruct_TMMRecoEvent(void *p) {
      typedef ::TMMRecoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMMRecoEvent

//______________________________________________________________________________
void TPadmeRun::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPadmeRun.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPadmeRun::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPadmeRun::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPadmeRun(void *p) {
      return  p ? new(p) ::TPadmeRun : new ::TPadmeRun;
   }
   static void *newArray_TPadmeRun(Long_t nElements, void *p) {
      return p ? new(p) ::TPadmeRun[nElements] : new ::TPadmeRun[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPadmeRun(void *p) {
      delete (static_cast<::TPadmeRun*>(p));
   }
   static void deleteArray_TPadmeRun(void *p) {
      delete [] (static_cast<::TPadmeRun*>(p));
   }
   static void destruct_TPadmeRun(void *p) {
      typedef ::TPadmeRun current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TPadmeRun

//______________________________________________________________________________
void TPVetoClusCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPVetoClusCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPVetoClusCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPVetoClusCollection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPVetoClusCollection(void *p) {
      return  p ? new(p) ::TPVetoClusCollection : new ::TPVetoClusCollection;
   }
   static void *newArray_TPVetoClusCollection(Long_t nElements, void *p) {
      return p ? new(p) ::TPVetoClusCollection[nElements] : new ::TPVetoClusCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPVetoClusCollection(void *p) {
      delete (static_cast<::TPVetoClusCollection*>(p));
   }
   static void deleteArray_TPVetoClusCollection(void *p) {
      delete [] (static_cast<::TPVetoClusCollection*>(p));
   }
   static void destruct_TPVetoClusCollection(void *p) {
      typedef ::TPVetoClusCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TPVetoClusCollection

//______________________________________________________________________________
void TPVetoMCDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPVetoMCDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPVetoMCDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPVetoMCDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPVetoMCDigi(void *p) {
      return  p ? new(p) ::TPVetoMCDigi : new ::TPVetoMCDigi;
   }
   static void *newArray_TPVetoMCDigi(Long_t nElements, void *p) {
      return p ? new(p) ::TPVetoMCDigi[nElements] : new ::TPVetoMCDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPVetoMCDigi(void *p) {
      delete (static_cast<::TPVetoMCDigi*>(p));
   }
   static void deleteArray_TPVetoMCDigi(void *p) {
      delete [] (static_cast<::TPVetoMCDigi*>(p));
   }
   static void destruct_TPVetoMCDigi(void *p) {
      typedef ::TPVetoMCDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TPVetoMCDigi

//______________________________________________________________________________
void TPVetoMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPVetoMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPVetoMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPVetoMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPVetoMCEvent(void *p) {
      return  p ? new(p) ::TPVetoMCEvent : new ::TPVetoMCEvent;
   }
   static void *newArray_TPVetoMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TPVetoMCEvent[nElements] : new ::TPVetoMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPVetoMCEvent(void *p) {
      delete (static_cast<::TPVetoMCEvent*>(p));
   }
   static void deleteArray_TPVetoMCEvent(void *p) {
      delete [] (static_cast<::TPVetoMCEvent*>(p));
   }
   static void destruct_TPVetoMCEvent(void *p) {
      typedef ::TPVetoMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TPVetoMCEvent

//______________________________________________________________________________
void TPVetoMCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPVetoMCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPVetoMCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPVetoMCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPVetoMCHit(void *p) {
      return  p ? new(p) ::TPVetoMCHit : new ::TPVetoMCHit;
   }
   static void *newArray_TPVetoMCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TPVetoMCHit[nElements] : new ::TPVetoMCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPVetoMCHit(void *p) {
      delete (static_cast<::TPVetoMCHit*>(p));
   }
   static void deleteArray_TPVetoMCHit(void *p) {
      delete [] (static_cast<::TPVetoMCHit*>(p));
   }
   static void destruct_TPVetoMCHit(void *p) {
      typedef ::TPVetoMCHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TPVetoMCHit

//______________________________________________________________________________
void TPVetoRecoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPVetoRecoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPVetoRecoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPVetoRecoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPVetoRecoEvent(void *p) {
      return  p ? new(p) ::TPVetoRecoEvent : new ::TPVetoRecoEvent;
   }
   static void *newArray_TPVetoRecoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TPVetoRecoEvent[nElements] : new ::TPVetoRecoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPVetoRecoEvent(void *p) {
      delete (static_cast<::TPVetoRecoEvent*>(p));
   }
   static void deleteArray_TPVetoRecoEvent(void *p) {
      delete [] (static_cast<::TPVetoRecoEvent*>(p));
   }
   static void destruct_TPVetoRecoEvent(void *p) {
      typedef ::TPVetoRecoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TPVetoRecoEvent

//______________________________________________________________________________
void TTriggerInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTriggerInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTriggerInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTriggerInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTriggerInfo(void *p) {
      return  p ? new(p) ::TTriggerInfo : new ::TTriggerInfo;
   }
   static void *newArray_TTriggerInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TTriggerInfo[nElements] : new ::TTriggerInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTriggerInfo(void *p) {
      delete (static_cast<::TTriggerInfo*>(p));
   }
   static void deleteArray_TTriggerInfo(void *p) {
      delete [] (static_cast<::TTriggerInfo*>(p));
   }
   static void destruct_TTriggerInfo(void *p) {
      typedef ::TTriggerInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTriggerInfo

//______________________________________________________________________________
void TRawEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRawEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRawEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRawEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRawEvent(void *p) {
      return  p ? new(p) ::TRawEvent : new ::TRawEvent;
   }
   static void *newArray_TRawEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TRawEvent[nElements] : new ::TRawEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRawEvent(void *p) {
      delete (static_cast<::TRawEvent*>(p));
   }
   static void deleteArray_TRawEvent(void *p) {
      delete [] (static_cast<::TRawEvent*>(p));
   }
   static void destruct_TRawEvent(void *p) {
      typedef ::TRawEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TRawEvent

//______________________________________________________________________________
void TRawMergedEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRawMergedEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRawMergedEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRawMergedEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRawMergedEvent(void *p) {
      return  p ? new(p) ::TRawMergedEvent : new ::TRawMergedEvent;
   }
   static void *newArray_TRawMergedEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TRawMergedEvent[nElements] : new ::TRawMergedEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRawMergedEvent(void *p) {
      delete (static_cast<::TRawMergedEvent*>(p));
   }
   static void deleteArray_TRawMergedEvent(void *p) {
      delete [] (static_cast<::TRawMergedEvent*>(p));
   }
   static void destruct_TRawMergedEvent(void *p) {
      typedef ::TRawMergedEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TRawMergedEvent

//______________________________________________________________________________
void TRecoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRecoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRecoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRecoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRecoEvent(void *p) {
      return  p ? new(p) ::TRecoEvent : new ::TRecoEvent;
   }
   static void *newArray_TRecoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TRecoEvent[nElements] : new ::TRecoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRecoEvent(void *p) {
      delete (static_cast<::TRecoEvent*>(p));
   }
   static void deleteArray_TRecoEvent(void *p) {
      delete [] (static_cast<::TRecoEvent*>(p));
   }
   static void destruct_TRecoEvent(void *p) {
      typedef ::TRecoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TRecoEvent

//______________________________________________________________________________
void TSACClusCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSACClusCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSACClusCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSACClusCollection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSACClusCollection(void *p) {
      return  p ? new(p) ::TSACClusCollection : new ::TSACClusCollection;
   }
   static void *newArray_TSACClusCollection(Long_t nElements, void *p) {
      return p ? new(p) ::TSACClusCollection[nElements] : new ::TSACClusCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSACClusCollection(void *p) {
      delete (static_cast<::TSACClusCollection*>(p));
   }
   static void deleteArray_TSACClusCollection(void *p) {
      delete [] (static_cast<::TSACClusCollection*>(p));
   }
   static void destruct_TSACClusCollection(void *p) {
      typedef ::TSACClusCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSACClusCollection

//______________________________________________________________________________
void TSACMCDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSACMCDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSACMCDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSACMCDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSACMCDigi(void *p) {
      return  p ? new(p) ::TSACMCDigi : new ::TSACMCDigi;
   }
   static void *newArray_TSACMCDigi(Long_t nElements, void *p) {
      return p ? new(p) ::TSACMCDigi[nElements] : new ::TSACMCDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSACMCDigi(void *p) {
      delete (static_cast<::TSACMCDigi*>(p));
   }
   static void deleteArray_TSACMCDigi(void *p) {
      delete [] (static_cast<::TSACMCDigi*>(p));
   }
   static void destruct_TSACMCDigi(void *p) {
      typedef ::TSACMCDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSACMCDigi

//______________________________________________________________________________
void TSACMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSACMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSACMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSACMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSACMCEvent(void *p) {
      return  p ? new(p) ::TSACMCEvent : new ::TSACMCEvent;
   }
   static void *newArray_TSACMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TSACMCEvent[nElements] : new ::TSACMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSACMCEvent(void *p) {
      delete (static_cast<::TSACMCEvent*>(p));
   }
   static void deleteArray_TSACMCEvent(void *p) {
      delete [] (static_cast<::TSACMCEvent*>(p));
   }
   static void destruct_TSACMCEvent(void *p) {
      typedef ::TSACMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSACMCEvent

//______________________________________________________________________________
void TSACMCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSACMCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSACMCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSACMCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSACMCHit(void *p) {
      return  p ? new(p) ::TSACMCHit : new ::TSACMCHit;
   }
   static void *newArray_TSACMCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TSACMCHit[nElements] : new ::TSACMCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSACMCHit(void *p) {
      delete (static_cast<::TSACMCHit*>(p));
   }
   static void deleteArray_TSACMCHit(void *p) {
      delete [] (static_cast<::TSACMCHit*>(p));
   }
   static void destruct_TSACMCHit(void *p) {
      typedef ::TSACMCHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSACMCHit

//______________________________________________________________________________
void TSACRecoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSACRecoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSACRecoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSACRecoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSACRecoEvent(void *p) {
      return  p ? new(p) ::TSACRecoEvent : new ::TSACRecoEvent;
   }
   static void *newArray_TSACRecoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TSACRecoEvent[nElements] : new ::TSACRecoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSACRecoEvent(void *p) {
      delete (static_cast<::TSACRecoEvent*>(p));
   }
   static void deleteArray_TSACRecoEvent(void *p) {
      delete [] (static_cast<::TSACRecoEvent*>(p));
   }
   static void destruct_TSACRecoEvent(void *p) {
      typedef ::TSACRecoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSACRecoEvent

//______________________________________________________________________________
void TTargetSignalFitParams::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTargetSignalFitParams.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTargetSignalFitParams::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTargetSignalFitParams::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTargetSignalFitParams(void *p) {
      return  p ? new(p) ::TTargetSignalFitParams : new ::TTargetSignalFitParams;
   }
   static void *newArray_TTargetSignalFitParams(Long_t nElements, void *p) {
      return p ? new(p) ::TTargetSignalFitParams[nElements] : new ::TTargetSignalFitParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTargetSignalFitParams(void *p) {
      delete (static_cast<::TTargetSignalFitParams*>(p));
   }
   static void deleteArray_TTargetSignalFitParams(void *p) {
      delete [] (static_cast<::TTargetSignalFitParams*>(p));
   }
   static void destruct_TTargetSignalFitParams(void *p) {
      typedef ::TTargetSignalFitParams current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTargetSignalFitParams

//______________________________________________________________________________
void TTargetFitEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTargetFitEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTargetFitEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTargetFitEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTargetFitEvent(void *p) {
      return  p ? new(p) ::TTargetFitEvent : new ::TTargetFitEvent;
   }
   static void *newArray_TTargetFitEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TTargetFitEvent[nElements] : new ::TTargetFitEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTargetFitEvent(void *p) {
      delete (static_cast<::TTargetFitEvent*>(p));
   }
   static void deleteArray_TTargetFitEvent(void *p) {
      delete [] (static_cast<::TTargetFitEvent*>(p));
   }
   static void destruct_TTargetFitEvent(void *p) {
      typedef ::TTargetFitEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTargetFitEvent

//______________________________________________________________________________
void TTargetMCDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTargetMCDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTargetMCDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTargetMCDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTargetMCDigi(void *p) {
      return  p ? new(p) ::TTargetMCDigi : new ::TTargetMCDigi;
   }
   static void *newArray_TTargetMCDigi(Long_t nElements, void *p) {
      return p ? new(p) ::TTargetMCDigi[nElements] : new ::TTargetMCDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTargetMCDigi(void *p) {
      delete (static_cast<::TTargetMCDigi*>(p));
   }
   static void deleteArray_TTargetMCDigi(void *p) {
      delete [] (static_cast<::TTargetMCDigi*>(p));
   }
   static void destruct_TTargetMCDigi(void *p) {
      typedef ::TTargetMCDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTargetMCDigi

//______________________________________________________________________________
void TTargetMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTargetMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTargetMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTargetMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTargetMCEvent(void *p) {
      return  p ? new(p) ::TTargetMCEvent : new ::TTargetMCEvent;
   }
   static void *newArray_TTargetMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TTargetMCEvent[nElements] : new ::TTargetMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTargetMCEvent(void *p) {
      delete (static_cast<::TTargetMCEvent*>(p));
   }
   static void deleteArray_TTargetMCEvent(void *p) {
      delete [] (static_cast<::TTargetMCEvent*>(p));
   }
   static void destruct_TTargetMCEvent(void *p) {
      typedef ::TTargetMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTargetMCEvent

//______________________________________________________________________________
void TTargetMCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTargetMCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTargetMCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTargetMCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTargetMCHit(void *p) {
      return  p ? new(p) ::TTargetMCHit : new ::TTargetMCHit;
   }
   static void *newArray_TTargetMCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TTargetMCHit[nElements] : new ::TTargetMCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTargetMCHit(void *p) {
      delete (static_cast<::TTargetMCHit*>(p));
   }
   static void deleteArray_TTargetMCHit(void *p) {
      delete [] (static_cast<::TTargetMCHit*>(p));
   }
   static void destruct_TTargetMCHit(void *p) {
      typedef ::TTargetMCHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTargetMCHit

//______________________________________________________________________________
void TTargetRecoBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTargetRecoBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTargetRecoBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTargetRecoBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTargetRecoBeam(void *p) {
      return  p ? new(p) ::TTargetRecoBeam : new ::TTargetRecoBeam;
   }
   static void *newArray_TTargetRecoBeam(Long_t nElements, void *p) {
      return p ? new(p) ::TTargetRecoBeam[nElements] : new ::TTargetRecoBeam[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTargetRecoBeam(void *p) {
      delete (static_cast<::TTargetRecoBeam*>(p));
   }
   static void deleteArray_TTargetRecoBeam(void *p) {
      delete [] (static_cast<::TTargetRecoBeam*>(p));
   }
   static void destruct_TTargetRecoBeam(void *p) {
      typedef ::TTargetRecoBeam current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTargetRecoBeam

//______________________________________________________________________________
void TTargetRecoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTargetRecoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTargetRecoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTargetRecoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTargetRecoEvent(void *p) {
      return  p ? new(p) ::TTargetRecoEvent : new ::TTargetRecoEvent;
   }
   static void *newArray_TTargetRecoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TTargetRecoEvent[nElements] : new ::TTargetRecoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTargetRecoEvent(void *p) {
      delete (static_cast<::TTargetRecoEvent*>(p));
   }
   static void deleteArray_TTargetRecoEvent(void *p) {
      delete [] (static_cast<::TTargetRecoEvent*>(p));
   }
   static void destruct_TTargetRecoEvent(void *p) {
      typedef ::TTargetRecoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTargetRecoEvent

//______________________________________________________________________________
void TTPixMCDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTPixMCDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTPixMCDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTPixMCDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTPixMCDigi(void *p) {
      return  p ? new(p) ::TTPixMCDigi : new ::TTPixMCDigi;
   }
   static void *newArray_TTPixMCDigi(Long_t nElements, void *p) {
      return p ? new(p) ::TTPixMCDigi[nElements] : new ::TTPixMCDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTPixMCDigi(void *p) {
      delete (static_cast<::TTPixMCDigi*>(p));
   }
   static void deleteArray_TTPixMCDigi(void *p) {
      delete [] (static_cast<::TTPixMCDigi*>(p));
   }
   static void destruct_TTPixMCDigi(void *p) {
      typedef ::TTPixMCDigi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTPixMCDigi

//______________________________________________________________________________
void TTPixMCEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTPixMCEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTPixMCEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTPixMCEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTPixMCEvent(void *p) {
      return  p ? new(p) ::TTPixMCEvent : new ::TTPixMCEvent;
   }
   static void *newArray_TTPixMCEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TTPixMCEvent[nElements] : new ::TTPixMCEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTPixMCEvent(void *p) {
      delete (static_cast<::TTPixMCEvent*>(p));
   }
   static void deleteArray_TTPixMCEvent(void *p) {
      delete [] (static_cast<::TTPixMCEvent*>(p));
   }
   static void destruct_TTPixMCEvent(void *p) {
      typedef ::TTPixMCEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTPixMCEvent

//______________________________________________________________________________
void TTPixMCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTPixMCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTPixMCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTPixMCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTPixMCHit(void *p) {
      return  p ? new(p) ::TTPixMCHit : new ::TTPixMCHit;
   }
   static void *newArray_TTPixMCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TTPixMCHit[nElements] : new ::TTPixMCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTPixMCHit(void *p) {
      delete (static_cast<::TTPixMCHit*>(p));
   }
   static void deleteArray_TTPixMCHit(void *p) {
      delete [] (static_cast<::TTPixMCHit*>(p));
   }
   static void destruct_TTPixMCHit(void *p) {
      typedef ::TTPixMCHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTPixMCHit

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 389,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 389,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlETSubDetectorInfomUgR_Dictionary();
   static void vectorlETSubDetectorInfomUgR_TClassManip(TClass*);
   static void *new_vectorlETSubDetectorInfomUgR(void *p = nullptr);
   static void *newArray_vectorlETSubDetectorInfomUgR(Long_t size, void *p);
   static void delete_vectorlETSubDetectorInfomUgR(void *p);
   static void deleteArray_vectorlETSubDetectorInfomUgR(void *p);
   static void destruct_vectorlETSubDetectorInfomUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TSubDetectorInfo*>*)
   {
      vector<TSubDetectorInfo*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TSubDetectorInfo*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TSubDetectorInfo*>", -2, "vector", 389,
                  typeid(vector<TSubDetectorInfo*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETSubDetectorInfomUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TSubDetectorInfo*>) );
      instance.SetNew(&new_vectorlETSubDetectorInfomUgR);
      instance.SetNewArray(&newArray_vectorlETSubDetectorInfomUgR);
      instance.SetDelete(&delete_vectorlETSubDetectorInfomUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETSubDetectorInfomUgR);
      instance.SetDestructor(&destruct_vectorlETSubDetectorInfomUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TSubDetectorInfo*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TSubDetectorInfo*>","std::vector<TSubDetectorInfo*, std::allocator<TSubDetectorInfo*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TSubDetectorInfo*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETSubDetectorInfomUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TSubDetectorInfo*>*>(nullptr))->GetClass();
      vectorlETSubDetectorInfomUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETSubDetectorInfomUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETSubDetectorInfomUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TSubDetectorInfo*> : new vector<TSubDetectorInfo*>;
   }
   static void *newArray_vectorlETSubDetectorInfomUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TSubDetectorInfo*>[nElements] : new vector<TSubDetectorInfo*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETSubDetectorInfomUgR(void *p) {
      delete (static_cast<vector<TSubDetectorInfo*>*>(p));
   }
   static void deleteArray_vectorlETSubDetectorInfomUgR(void *p) {
      delete [] (static_cast<vector<TSubDetectorInfo*>*>(p));
   }
   static void destruct_vectorlETSubDetectorInfomUgR(void *p) {
      typedef vector<TSubDetectorInfo*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TSubDetectorInfo*>

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = nullptr);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 389,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TString>","std::vector<TString, std::allocator<TString> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TString>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TString>*>(nullptr))->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete (static_cast<vector<TString>*>(p));
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] (static_cast<vector<TString>*>(p));
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace {
  void TriggerDictionaryInitialization_PersistencyDict_Impl() {
    static const char* headers[] = {
"include/TADCBoard.hh",
"include/TADCChannel.hh",
"include/TADCTrigger.hh",
"include/TDetectorInfo.hh",
"include/TECalClusCollection.hh",
"include/TECalMCDigi.hh",
"include/TECalMCEvent.hh",
"include/TECalMCHit.hh",
"include/TECalRecoEvent.hh",
"include/TETagClusCollection.hh",
"include/TETagMCDigi.hh",
"include/TETagMCEvent.hh",
"include/TETagMCHit.hh",
"include/TETagRecoEvent.hh",
"include/TEVetoClusCollection.hh",
"include/TEVetoMCDigi.hh",
"include/TEVetoMCEvent.hh",
"include/TEVetoMCHit.hh",
"include/TEVetoRecoEvent.hh",
"include/THEPVetoClusCollection.hh",
"include/THEPVetoMCDigi.hh",
"include/THEPVetoMCEvent.hh",
"include/THEPVetoMCHit.hh",
"include/THEPVetoRecoEvent.hh",
"include/TLeadGlassMCDigi.hh",
"include/TLeadGlassMCEvent.hh",
"include/TLeadGlassMCHit.hh",
"include/TLeadGlassRecoEvent.hh",
"include/TMCEvent.hh",
"include/TMCParticle.hh",
"include/TMCTruthEvent.hh",
"include/TMCVDigi.hh",
"include/TMCVertex.hh",
"include/TMCVEvent.hh",
"include/TMCVHit.hh",
"include/TMMBoard.hh",
"include/TMMChannel.hh",
"include/TMMClusCollection.hh",
"include/TMMInfo.hh",
"include/TMMMCDigi.hh",
"include/TMMMCEvent.hh",
"include/TMMMCHit.hh",
"include/TMMRawEvent.hh",
"include/TMMRecoEvent.hh",
"include/TPadmeRun.hh",
"include/TPVetoClusCollection.hh",
"include/TPVetoMCDigi.hh",
"include/TPVetoMCEvent.hh",
"include/TPVetoMCHit.hh",
"include/TPVetoRecoEvent.hh",
"include/TRawEvent.hh",
"include/TRawMergedEvent.hh",
"include/TRecoEvent.hh",
"include/TRecoVClusCollection.hh",
"include/TRecoVCluster.hh",
"include/TRecoVHit.hh",
"include/TRecoVObject.hh",
"include/TSACClusCollection.hh",
"include/TSACMCDigi.hh",
"include/TSACMCEvent.hh",
"include/TSACMCHit.hh",
"include/TSACRecoEvent.hh",
"include/TSubDetectorInfo.hh",
"include/TTargetFitEvent.hh",
"include/TTargetMCDigi.hh",
"include/TTargetMCEvent.hh",
"include/TTargetMCHit.hh",
"include/TTargetRecoBeam.hh",
"include/TTargetRecoEvent.hh",
"include/TTargetSignalFitParams.hh",
"include/TTPixMCDigi.hh",
"include/TTPixMCEvent.hh",
"include/TTPixMCHit.hh",
"include/TTriggerInfo.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.34.04/x86_64-almalinux9.5-gcc115-opt/include/",
"/afs/cern.ch/user/e/edimeco/padme-fw/PadmeRoot/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PersistencyDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TADCChannel.hh")))  __attribute__((annotate("$clingAutoload$include/TADCBoard.hh")))  TADCChannel;
class __attribute__((annotate("$clingAutoload$TADCTrigger.hh")))  __attribute__((annotate("$clingAutoload$include/TADCBoard.hh")))  TADCTrigger;
class __attribute__((annotate("$clingAutoload$include/TADCBoard.hh")))  TADCBoard;
class __attribute__((annotate("$clingAutoload$TSubDetectorInfo.hh")))  __attribute__((annotate("$clingAutoload$include/TDetectorInfo.hh")))  TSubDetectorInfo;
class __attribute__((annotate("$clingAutoload$include/TDetectorInfo.hh")))  TDetectorInfo;
class __attribute__((annotate("$clingAutoload$TMCVHit.hh")))  __attribute__((annotate("$clingAutoload$include/TECalClusCollection.hh")))  TMCVHit;
class __attribute__((annotate("$clingAutoload$TRecoVCluster.hh")))  __attribute__((annotate("$clingAutoload$include/TECalClusCollection.hh")))  TRecoVCluster;
class __attribute__((annotate("$clingAutoload$TRecoVClusCollection.hh")))  __attribute__((annotate("$clingAutoload$include/TECalClusCollection.hh")))  TRecoVClusCollection;
class __attribute__((annotate("$clingAutoload$include/TECalClusCollection.hh")))  TECalClusCollection;
class __attribute__((annotate("$clingAutoload$TMCVDigi.hh")))  __attribute__((annotate("$clingAutoload$include/TECalMCDigi.hh")))  TMCVDigi;
class __attribute__((annotate("$clingAutoload$include/TECalMCDigi.hh")))  TECalMCDigi;
class __attribute__((annotate("$clingAutoload$TMCVEvent.hh")))  __attribute__((annotate("$clingAutoload$include/TECalMCEvent.hh")))  TMCVEvent;
class __attribute__((annotate("$clingAutoload$include/TECalMCEvent.hh")))  TECalMCEvent;
class __attribute__((annotate("$clingAutoload$include/TECalMCHit.hh")))  TECalMCHit;
class __attribute__((annotate("$clingAutoload$TRecoVHit.hh")))  __attribute__((annotate("$clingAutoload$include/TECalRecoEvent.hh")))  TRecoVHit;
class __attribute__((annotate("$clingAutoload$TRecoVObject.hh")))  __attribute__((annotate("$clingAutoload$include/TECalRecoEvent.hh")))  TRecoVObject;
class __attribute__((annotate("$clingAutoload$include/TECalRecoEvent.hh")))  TECalRecoEvent;
class __attribute__((annotate("$clingAutoload$include/TETagClusCollection.hh")))  TETagClusCollection;
class __attribute__((annotate("$clingAutoload$include/TETagMCDigi.hh")))  TETagMCDigi;
class __attribute__((annotate("$clingAutoload$include/TETagMCEvent.hh")))  TETagMCEvent;
class __attribute__((annotate("$clingAutoload$include/TETagMCHit.hh")))  TETagMCHit;
class __attribute__((annotate("$clingAutoload$include/TETagRecoEvent.hh")))  TETagRecoEvent;
class __attribute__((annotate("$clingAutoload$include/TEVetoClusCollection.hh")))  TEVetoClusCollection;
class __attribute__((annotate("$clingAutoload$include/TEVetoMCDigi.hh")))  TEVetoMCDigi;
class __attribute__((annotate("$clingAutoload$include/TEVetoMCEvent.hh")))  TEVetoMCEvent;
class __attribute__((annotate("$clingAutoload$include/TEVetoMCHit.hh")))  TEVetoMCHit;
class __attribute__((annotate("$clingAutoload$include/TEVetoRecoEvent.hh")))  TEVetoRecoEvent;
class __attribute__((annotate("$clingAutoload$include/THEPVetoClusCollection.hh")))  THEPVetoClusCollection;
class __attribute__((annotate("$clingAutoload$include/THEPVetoMCDigi.hh")))  THEPVetoMCDigi;
class __attribute__((annotate("$clingAutoload$include/THEPVetoMCEvent.hh")))  THEPVetoMCEvent;
class __attribute__((annotate("$clingAutoload$include/THEPVetoMCHit.hh")))  THEPVetoMCHit;
class __attribute__((annotate("$clingAutoload$include/THEPVetoRecoEvent.hh")))  THEPVetoRecoEvent;
class __attribute__((annotate("$clingAutoload$include/TLeadGlassMCDigi.hh")))  TLeadGlassMCDigi;
class __attribute__((annotate("$clingAutoload$include/TLeadGlassMCEvent.hh")))  TLeadGlassMCEvent;
class __attribute__((annotate("$clingAutoload$include/TLeadGlassMCHit.hh")))  TLeadGlassMCHit;
class __attribute__((annotate("$clingAutoload$include/TLeadGlassRecoEvent.hh")))  TLeadGlassRecoEvent;
class __attribute__((annotate("$clingAutoload$include/TMCEvent.hh")))  TMCEvent;
class __attribute__((annotate("$clingAutoload$include/TMCParticle.hh")))  TMCParticle;
class __attribute__((annotate("$clingAutoload$TMCVertex.hh")))  __attribute__((annotate("$clingAutoload$include/TMCTruthEvent.hh")))  TMCVertex;
class __attribute__((annotate("$clingAutoload$include/TMCTruthEvent.hh")))  TMCTruthEvent;
class __attribute__((annotate("$clingAutoload$TMMChannel.hh")))  __attribute__((annotate("$clingAutoload$include/TMMBoard.hh")))  TMMChannel;
class __attribute__((annotate("$clingAutoload$include/TMMBoard.hh")))  TMMBoard;
class __attribute__((annotate("$clingAutoload$include/TMMClusCollection.hh")))  TMMClusCollection;
class __attribute__((annotate("$clingAutoload$include/TMMInfo.hh")))  TMMInfo;
class __attribute__((annotate("$clingAutoload$include/TMMMCDigi.hh")))  TMMMCDigi;
class __attribute__((annotate("$clingAutoload$include/TMMMCEvent.hh")))  TMMMCEvent;
class __attribute__((annotate("$clingAutoload$include/TMMMCHit.hh")))  TMMMCHit;
class __attribute__((annotate("$clingAutoload$include/TMMRawEvent.hh")))  TMMRawEvent;
class __attribute__((annotate("$clingAutoload$include/TMMRecoEvent.hh")))  TMMRecoEvent;
class __attribute__((annotate("$clingAutoload$include/TPadmeRun.hh")))  TPadmeRun;
class __attribute__((annotate("$clingAutoload$include/TPVetoClusCollection.hh")))  TPVetoClusCollection;
class __attribute__((annotate("$clingAutoload$include/TPVetoMCDigi.hh")))  TPVetoMCDigi;
class __attribute__((annotate("$clingAutoload$include/TPVetoMCEvent.hh")))  TPVetoMCEvent;
class __attribute__((annotate("$clingAutoload$include/TPVetoMCHit.hh")))  TPVetoMCHit;
class __attribute__((annotate("$clingAutoload$include/TPVetoRecoEvent.hh")))  TPVetoRecoEvent;
class __attribute__((annotate("$clingAutoload$TTriggerInfo.hh")))  __attribute__((annotate("$clingAutoload$include/TRawEvent.hh")))  TTriggerInfo;
class __attribute__((annotate("$clingAutoload$include/TRawEvent.hh")))  TRawEvent;
class __attribute__((annotate("$clingAutoload$include/TRawMergedEvent.hh")))  TRawMergedEvent;
class __attribute__((annotate("$clingAutoload$include/TRecoEvent.hh")))  TRecoEvent;
class __attribute__((annotate("$clingAutoload$include/TSACClusCollection.hh")))  TSACClusCollection;
class __attribute__((annotate("$clingAutoload$include/TSACMCDigi.hh")))  TSACMCDigi;
class __attribute__((annotate("$clingAutoload$include/TSACMCEvent.hh")))  TSACMCEvent;
class __attribute__((annotate("$clingAutoload$include/TSACMCHit.hh")))  TSACMCHit;
class __attribute__((annotate("$clingAutoload$include/TSACRecoEvent.hh")))  TSACRecoEvent;
class __attribute__((annotate("$clingAutoload$TTargetSignalFitParams.hh")))  __attribute__((annotate("$clingAutoload$include/TTargetFitEvent.hh")))  TTargetSignalFitParams;
class __attribute__((annotate("$clingAutoload$include/TTargetFitEvent.hh")))  TTargetFitEvent;
class __attribute__((annotate("$clingAutoload$include/TTargetMCDigi.hh")))  TTargetMCDigi;
class __attribute__((annotate("$clingAutoload$include/TTargetMCEvent.hh")))  TTargetMCEvent;
class __attribute__((annotate("$clingAutoload$include/TTargetMCHit.hh")))  TTargetMCHit;
class __attribute__((annotate("$clingAutoload$include/TTargetRecoBeam.hh")))  TTargetRecoBeam;
class __attribute__((annotate("$clingAutoload$include/TTargetRecoEvent.hh")))  TTargetRecoEvent;
class __attribute__((annotate("$clingAutoload$include/TTPixMCDigi.hh")))  TTPixMCDigi;
class __attribute__((annotate("$clingAutoload$include/TTPixMCEvent.hh")))  TTPixMCEvent;
class __attribute__((annotate("$clingAutoload$include/TTPixMCHit.hh")))  TTPixMCHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PersistencyDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TADCBoard.hh"
#include "include/TADCChannel.hh"
#include "include/TADCTrigger.hh"
#include "include/TDetectorInfo.hh"
#include "include/TECalClusCollection.hh"
#include "include/TECalMCDigi.hh"
#include "include/TECalMCEvent.hh"
#include "include/TECalMCHit.hh"
#include "include/TECalRecoEvent.hh"
#include "include/TETagClusCollection.hh"
#include "include/TETagMCDigi.hh"
#include "include/TETagMCEvent.hh"
#include "include/TETagMCHit.hh"
#include "include/TETagRecoEvent.hh"
#include "include/TEVetoClusCollection.hh"
#include "include/TEVetoMCDigi.hh"
#include "include/TEVetoMCEvent.hh"
#include "include/TEVetoMCHit.hh"
#include "include/TEVetoRecoEvent.hh"
#include "include/THEPVetoClusCollection.hh"
#include "include/THEPVetoMCDigi.hh"
#include "include/THEPVetoMCEvent.hh"
#include "include/THEPVetoMCHit.hh"
#include "include/THEPVetoRecoEvent.hh"
#include "include/TLeadGlassMCDigi.hh"
#include "include/TLeadGlassMCEvent.hh"
#include "include/TLeadGlassMCHit.hh"
#include "include/TLeadGlassRecoEvent.hh"
#include "include/TMCEvent.hh"
#include "include/TMCParticle.hh"
#include "include/TMCTruthEvent.hh"
#include "include/TMCVDigi.hh"
#include "include/TMCVertex.hh"
#include "include/TMCVEvent.hh"
#include "include/TMCVHit.hh"
#include "include/TMMBoard.hh"
#include "include/TMMChannel.hh"
#include "include/TMMClusCollection.hh"
#include "include/TMMInfo.hh"
#include "include/TMMMCDigi.hh"
#include "include/TMMMCEvent.hh"
#include "include/TMMMCHit.hh"
#include "include/TMMRawEvent.hh"
#include "include/TMMRecoEvent.hh"
#include "include/TPadmeRun.hh"
#include "include/TPVetoClusCollection.hh"
#include "include/TPVetoMCDigi.hh"
#include "include/TPVetoMCEvent.hh"
#include "include/TPVetoMCHit.hh"
#include "include/TPVetoRecoEvent.hh"
#include "include/TRawEvent.hh"
#include "include/TRawMergedEvent.hh"
#include "include/TRecoEvent.hh"
#include "include/TRecoVClusCollection.hh"
#include "include/TRecoVCluster.hh"
#include "include/TRecoVHit.hh"
#include "include/TRecoVObject.hh"
#include "include/TSACClusCollection.hh"
#include "include/TSACMCDigi.hh"
#include "include/TSACMCEvent.hh"
#include "include/TSACMCHit.hh"
#include "include/TSACRecoEvent.hh"
#include "include/TSubDetectorInfo.hh"
#include "include/TTargetFitEvent.hh"
#include "include/TTargetMCDigi.hh"
#include "include/TTargetMCEvent.hh"
#include "include/TTargetMCHit.hh"
#include "include/TTargetRecoBeam.hh"
#include "include/TTargetRecoEvent.hh"
#include "include/TTargetSignalFitParams.hh"
#include "include/TTPixMCDigi.hh"
#include "include/TTPixMCEvent.hh"
#include "include/TTPixMCHit.hh"
#include "include/TTriggerInfo.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TADCBoard", payloadCode, "@",
"TADCChannel", payloadCode, "@",
"TADCTrigger", payloadCode, "@",
"TDetectorInfo", payloadCode, "@",
"TECalClusCollection", payloadCode, "@",
"TECalMCDigi", payloadCode, "@",
"TECalMCEvent", payloadCode, "@",
"TECalMCHit", payloadCode, "@",
"TECalRecoEvent", payloadCode, "@",
"TETagClusCollection", payloadCode, "@",
"TETagMCDigi", payloadCode, "@",
"TETagMCEvent", payloadCode, "@",
"TETagMCHit", payloadCode, "@",
"TETagRecoEvent", payloadCode, "@",
"TEVetoClusCollection", payloadCode, "@",
"TEVetoMCDigi", payloadCode, "@",
"TEVetoMCEvent", payloadCode, "@",
"TEVetoMCHit", payloadCode, "@",
"TEVetoRecoEvent", payloadCode, "@",
"THEPVetoClusCollection", payloadCode, "@",
"THEPVetoMCDigi", payloadCode, "@",
"THEPVetoMCEvent", payloadCode, "@",
"THEPVetoMCHit", payloadCode, "@",
"THEPVetoRecoEvent", payloadCode, "@",
"TLeadGlassMCDigi", payloadCode, "@",
"TLeadGlassMCEvent", payloadCode, "@",
"TLeadGlassMCHit", payloadCode, "@",
"TLeadGlassRecoEvent", payloadCode, "@",
"TMCEvent", payloadCode, "@",
"TMCParticle", payloadCode, "@",
"TMCTruthEvent", payloadCode, "@",
"TMCVDigi", payloadCode, "@",
"TMCVEvent", payloadCode, "@",
"TMCVHit", payloadCode, "@",
"TMCVertex", payloadCode, "@",
"TMMBoard", payloadCode, "@",
"TMMChannel", payloadCode, "@",
"TMMClusCollection", payloadCode, "@",
"TMMInfo", payloadCode, "@",
"TMMMCDigi", payloadCode, "@",
"TMMMCEvent", payloadCode, "@",
"TMMMCHit", payloadCode, "@",
"TMMRawEvent", payloadCode, "@",
"TMMRecoEvent", payloadCode, "@",
"TPVetoClusCollection", payloadCode, "@",
"TPVetoMCDigi", payloadCode, "@",
"TPVetoMCEvent", payloadCode, "@",
"TPVetoMCHit", payloadCode, "@",
"TPVetoRecoEvent", payloadCode, "@",
"TPadmeRun", payloadCode, "@",
"TRawEvent", payloadCode, "@",
"TRawMergedEvent", payloadCode, "@",
"TRecoEvent", payloadCode, "@",
"TRecoVClusCollection", payloadCode, "@",
"TRecoVCluster", payloadCode, "@",
"TRecoVHit", payloadCode, "@",
"TRecoVObject", payloadCode, "@",
"TSACClusCollection", payloadCode, "@",
"TSACMCDigi", payloadCode, "@",
"TSACMCEvent", payloadCode, "@",
"TSACMCHit", payloadCode, "@",
"TSACRecoEvent", payloadCode, "@",
"TSubDetectorInfo", payloadCode, "@",
"TTPixMCDigi", payloadCode, "@",
"TTPixMCEvent", payloadCode, "@",
"TTPixMCHit", payloadCode, "@",
"TTargetFitEvent", payloadCode, "@",
"TTargetMCDigi", payloadCode, "@",
"TTargetMCEvent", payloadCode, "@",
"TTargetMCHit", payloadCode, "@",
"TTargetRecoBeam", payloadCode, "@",
"TTargetRecoEvent", payloadCode, "@",
"TTargetSignalFitParams", payloadCode, "@",
"TTriggerInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PersistencyDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PersistencyDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PersistencyDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PersistencyDict() {
  TriggerDictionaryInitialization_PersistencyDict_Impl();
}
