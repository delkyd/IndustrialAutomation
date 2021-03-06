#ifdef _MSC_VER
#pragma warning (disable: 4018)
#pragma warning (disable: 4663)
#pragma warning (disable: 4284)
#endif

#define G_RES

#include <wx/wx.h>
#include "ControlRoom/globals.h"

#include "common/oapcBinHead.cpp"
#include "common/oapcMutexLocker.cpp"
#include "common/oapcResourceBundle.cpp"

#include "ControlRoom/ExternalIOLibs.cpp"
#include "ControlRoom/ExternalIOLib.cpp"
#include "ControlRoom/LogDataCtrl.cpp"
#include "ControlRoom/PCompiler.cpp"

//#include "UserList.cpp"
//#include "UserData.cpp"

#include "ControlRoom/flowWalkerPool.cpp"
#include "ControlRoom/flowWalkerThread.cpp"
#include "ControlRoom/FlowDispatcherThread.cpp"
#include "ControlRoom/FlowDataController.cpp"

#include "ControlRoom/flowObject.cpp"
#include "ControlRoom/flowConnection.cpp"
#include "ControlRoom/flowConverter.cpp"
#include "ControlRoom/flowConverter2Pair.cpp"
#include "ControlRoom/flowConverterPair2.cpp"
#include "ControlRoom/flowConverterChar2Digi.cpp"
#include "ControlRoom/flowConverterChar2Num.cpp"
#include "ControlRoom/flowConverterChar2Pair.cpp"
#include "ControlRoom/flowConverterPair2Char.cpp"
#include "ControlRoom/flowConverterPair2Digi.cpp"
#include "ControlRoom/flowConverterPair2Num.cpp"
#include "ControlRoom/flowConverterPair2Bin.cpp"
#include "ControlRoom/flowConverterDigi2Num.cpp"
#include "ControlRoom/flowConverterDigi2Char.cpp"
#include "ControlRoom/flowConverterDigi2Pair.cpp"
#include "ControlRoom/flowConverterNum2Bits.cpp"
#include "ControlRoom/flowConverterNum2Char.cpp"
#include "ControlRoom/flowConverterNum2Digi.cpp"
#include "ControlRoom/flowConverterNum2Pair.cpp"
#include "ControlRoom/flowConverterBin2Pair.cpp"
#include "ControlRoom/flowDelay.cpp"
#include "ControlRoom/flowExternalIOLib.cpp"
#include "ControlRoom/flowGroup.cpp"
#include "ControlRoom/flowConverterMixed2Char.cpp"
#include "ControlRoom/flowLog.cpp"
#include "ControlRoom/flowLogRecorder.cpp"
#include "ControlRoom/flowLogInUser.cpp"
#include "ControlRoom/flowLogic.cpp"
#include "ControlRoom/flowLogicDigiConcat.cpp"
#include "ControlRoom/flowLogicDigiRSFF.cpp"
#include "ControlRoom/flowLogicDigiTFF.cpp"
#include "ControlRoom/flowLogicDigiNOT.cpp"
#include "ControlRoom/flowLogicNumConcat.cpp"
#include "ControlRoom/flowLogicNumNOT.cpp"
#include "ControlRoom/flowLogicDigiNOP.cpp"
#include "ControlRoom/flowLogicNumNOP.cpp"
#include "ControlRoom/flowLogicCharNOP.cpp"
#include "ControlRoom/flowLogicBinNOP.cpp"
#include "ControlRoom/flowLogicDigiShift.cpp"
#include "ControlRoom/flowLogicNumShift.cpp"
#include "ControlRoom/flowLogicCharShift.cpp"
#include "ControlRoom/flowLogicBinShift.cpp"
#include "ControlRoom/flowMathDigiCmp.cpp"
#include "ControlRoom/flowMathNumCmp.cpp"
#include "ControlRoom/flowMathCharCmp.cpp"
#include "ControlRoom/flowMathDigiCtr.cpp"
#include "ControlRoom/flowMathNumCtr.cpp"
#include "ControlRoom/flowMathCharCtr.cpp"
#include "ControlRoom/flowMathBinCtr.cpp"
#include "ControlRoom/flowStart.cpp"
#include "ControlRoom/flowStop.cpp"
#include "ControlRoom/flowDigiTrigGate.cpp"
#include "ControlRoom/flowDigiGate.cpp"
#include "ControlRoom/flowNumTrigGate.cpp"
#include "ControlRoom/flowNumGate.cpp"
#include "ControlRoom/flowCharTrigGate.cpp"
#include "ControlRoom/flowCharGate.cpp"
#include "ControlRoom/flowBinTrigGate.cpp"
#include "ControlRoom/flowBinGate.cpp"
#include "ControlRoom/flowTimer.cpp"
#include "ControlRoom/flowISConnect.cpp"

#include "ControlRoom/ObjectList.cpp"
#include "ControlRoom/globals.cpp"
#include "ControlRoom/IOElementDefinition.cpp"

#include "ControlRoom/HPlayerMainApp.cpp"
