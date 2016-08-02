#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SceneScript
struct SceneScript_t1382933591;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityScript.Lang.Array
struct Array_t1209885965;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void SceneScript::.ctor()
extern "C"  void SceneScript__ctor_m579483231 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::Start()
extern "C"  void SceneScript_Start_m3821588319 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::Update()
extern "C"  void SceneScript_Update_m2510973070 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::initiateScoreBoard()
extern "C"  void SceneScript_initiateScoreBoard_m2183097234 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject SceneScript::createScoreCircle(UnityEngine.Vector3,UnityEngine.Color,System.Int32)
extern "C"  GameObject_t4012695102 * SceneScript_createScoreCircle_m2870725248 (SceneScript_t1382933591 * __this, Vector3_t3525329789  ___vector0, Color_t1588175760  ___color1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::initiateCenters()
extern "C"  void SceneScript_initiateCenters_m4131381570 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::initiateLeafs()
extern "C"  void SceneScript_initiateLeafs_m3098978905 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityScript.Lang.Array SceneScript::getLeavesFromRow(System.Int32)
extern "C"  Array_t1209885965 * SceneScript_getLeavesFromRow_m3475077748 (SceneScript_t1382933591 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityScript.Lang.Array SceneScript::getLeavesFromCol(System.Int32)
extern "C"  Array_t1209885965 * SceneScript_getLeavesFromCol_m952100762 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isRowSparseAt(System.Int32)
extern "C"  bool SceneScript_isRowSparseAt_m338363919 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isColSparseAt(System.Int32)
extern "C"  bool SceneScript_isColSparseAt_m624225589 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isArraySparse(UnityScript.Lang.Array)
extern "C"  bool SceneScript_isArraySparse_m3487391683 (SceneScript_t1382933591 * __this, Array_t1209885965 * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::shuffleColorsAtArray(UnityScript.Lang.Array)
extern "C"  void SceneScript_shuffleColorsAtArray_m3845349147 (SceneScript_t1382933591 * __this, Array_t1209885965 * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::shuffleColorsAtRow(System.Int32)
extern "C"  void SceneScript_shuffleColorsAtRow_m3980019092 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::shuffleColorsAtCol(System.Int32)
extern "C"  void SceneScript_shuffleColorsAtCol_m1457042106 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::applyNewColorAtArray(UnityScript.Lang.Array)
extern "C"  void SceneScript_applyNewColorAtArray_m3912175795 (SceneScript_t1382933591 * __this, Array_t1209885965 * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::applyNewColorAtRow(System.Int32)
extern "C"  void SceneScript_applyNewColorAtRow_m3837893420 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::applyNewColorAtCol(System.Int32)
extern "C"  void SceneScript_applyNewColorAtCol_m1314916434 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::shuffleAllLeaves()
extern "C"  void SceneScript_shuffleAllLeaves_m3160213129 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::applyNewColorAtAllLeaves()
extern "C"  void SceneScript_applyNewColorAtAllLeaves_m4093110622 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::debugArray(UnityScript.Lang.Array)
extern "C"  void SceneScript_debugArray_m445982980 (SceneScript_t1382933591 * __this, Array_t1209885965 * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::listenForClickOnCenters()
extern "C"  void SceneScript_listenForClickOnCenters_m1121997750 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::handleRotatation(System.Int32,UnityEngine.Vector3)
extern "C"  void SceneScript_handleRotatation_m1411963324 (SceneScript_t1382933591 * __this, int32_t ___index0, Vector3_t3525329789  ___vector1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneScript::getLeftLeafFromCenter(System.Int32)
extern "C"  int32_t SceneScript_getLeftLeafFromCenter_m1774922240 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneScript::getRightLeafFromCenter(System.Int32)
extern "C"  int32_t SceneScript_getRightLeafFromCenter_m1080276097 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneScript::getTopLeafFromCenter(System.Int32)
extern "C"  int32_t SceneScript_getTopLeafFromCenter_m2244346298 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneScript::getBotLeafFromCenter(System.Int32)
extern "C"  int32_t SceneScript_getBotLeafFromCenter_m2997321516 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityScript.Lang.Array SceneScript::getFlipingLeavesFromRow(System.Int32)
extern "C"  Array_t1209885965 * SceneScript_getFlipingLeavesFromRow_m2583174915 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityScript.Lang.Array SceneScript::getFlipingLeavesFromCol(System.Int32)
extern "C"  Array_t1209885965 * SceneScript_getFlipingLeavesFromCol_m60197929 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityScript.Lang.Array SceneScript::getFlippingLeavesFromArray(UnityScript.Lang.Array)
extern "C"  Array_t1209885965 * SceneScript_getFlippingLeavesFromArray_m2363354524 (SceneScript_t1382933591 * __this, Array_t1209885965 * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneScript::getLeftColNumFromCenterNum(System.Int32)
extern "C"  int32_t SceneScript_getLeftColNumFromCenterNum_m3518032514 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneScript::getRightColNumFromCenterNum(System.Int32)
extern "C"  int32_t SceneScript_getRightColNumFromCenterNum_m3003107489 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneScript::getTopRowNumFromCenterNum(System.Int32)
extern "C"  int32_t SceneScript_getTopRowNumFromCenterNum_m2263774690 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneScript::getBotRowNumFromCenterNum(System.Int32)
extern "C"  int32_t SceneScript_getBotRowNumFromCenterNum_m1325109168 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::handleEventsAfterRotatingCenter(System.Int32)
extern "C"  void SceneScript_handleEventsAfterRotatingCenter_m3128430614 (SceneScript_t1382933591 * __this, int32_t ___centerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::shrinkEnlargeFlipScoreBoard()
extern "C"  void SceneScript_shrinkEnlargeFlipScoreBoard_m4108625447 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneScript::getComboNum(System.Int32)
extern "C"  int32_t SceneScript_getComboNum_m4151384084 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::addScores(System.Int32)
extern "C"  void SceneScript_addScores_m700768272 (SceneScript_t1382933591 * __this, int32_t ___comboScore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::shuffleAndFlipLeftCol(System.Int32)
extern "C"  void SceneScript_shuffleAndFlipLeftCol_m3346687164 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::shuffleAndFlipRightCol(System.Int32)
extern "C"  void SceneScript_shuffleAndFlipRightCol_m3073940997 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::shuffleAndFlipTopRow(System.Int32)
extern "C"  void SceneScript_shuffleAndFlipTopRow_m903166598 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::shuffleAndFlipBotRow(System.Int32)
extern "C"  void SceneScript_shuffleAndFlipBotRow_m4273713236 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isRotationValid(System.Int32)
extern "C"  bool SceneScript_isRotationValid_m2278480128 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isComboInLeftCol(System.Int32)
extern "C"  bool SceneScript_isComboInLeftCol_m1714548712 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isComboInRightCol(System.Int32)
extern "C"  bool SceneScript_isComboInRightCol_m4017256537 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isComboInTopRow(System.Int32)
extern "C"  bool SceneScript_isComboInTopRow_m296327642 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isComboInBotRow(System.Int32)
extern "C"  bool SceneScript_isComboInBotRow_m3666874280 (SceneScript_t1382933591 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::flipLeavesAtArray(UnityScript.Lang.Array)
extern "C"  void SceneScript_flipLeavesAtArray_m2865771059 (SceneScript_t1382933591 * __this, Array_t1209885965 * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::triggerMatchAnimationAtArray(UnityScript.Lang.Array)
extern "C"  void SceneScript_triggerMatchAnimationAtArray_m3311326221 (SceneScript_t1382933591 * __this, Array_t1209885965 * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::setIdleCurve()
extern "C"  void SceneScript_setIdleCurve_m2204990430 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::setEnlargeCurve()
extern "C"  void SceneScript_setEnlargeCurve_m3838530108 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::setShrinkCurve()
extern "C"  void SceneScript_setShrinkCurve_m1039761289 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isDeckLock()
extern "C"  bool SceneScript_isDeckLock_m1589070309 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::handleDecklock()
extern "C"  void SceneScript_handleDecklock_m2957880961 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::flipAllLeaves()
extern "C"  void SceneScript_flipAllLeaves_m1639790413 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isHintNeeded()
extern "C"  bool SceneScript_isHintNeeded_m2010987405 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::handleHint()
extern "C"  void SceneScript_handleHint_m2378644724 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::highlightColor(System.Int32)
extern "C"  void SceneScript_highlightColor_m497891461 (SceneScript_t1382933591 * __this, int32_t ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::highlightArray(UnityScript.Lang.Array)
extern "C"  void SceneScript_highlightArray_m768501827 (SceneScript_t1382933591 * __this, Array_t1209885965 * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneScript::getColorFromCombo(UnityScript.Lang.Array)
extern "C"  int32_t SceneScript_getColorFromCombo_m1835151973 (SceneScript_t1382933591 * __this, Array_t1209885965 * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::initiateTimeStamps()
extern "C"  void SceneScript_initiateTimeStamps_m2265430043 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject SceneScript::createTimeStamp(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C"  GameObject_t4012695102 * SceneScript_createTimeStamp_m22196264 (SceneScript_t1382933591 * __this, Vector3_t3525329789  ___vector0, Color_t1588175760  ___color1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isOneSecPass()
extern "C"  bool SceneScript_isOneSecPass_m2856194349 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::updateAccumTime()
extern "C"  void SceneScript_updateAccumTime_m1681234906 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::subtractOneSec()
extern "C"  void SceneScript_subtractOneSec_m1268727396 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::bingo(System.Int32)
extern "C"  void SceneScript_bingo_m1140923229 (SceneScript_t1382933591 * __this, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::resetAllLeaves()
extern "C"  void SceneScript_resetAllLeaves_m553690995 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isGameOver()
extern "C"  bool SceneScript_isGameOver_m3244978135 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::handleGameOver()
extern "C"  void SceneScript_handleGameOver_m3697655955 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::startGame()
extern "C"  void SceneScript_startGame_m4274572305 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::toggleCollider(UnityEngine.GameObject)
extern "C"  void SceneScript_toggleCollider_m33023749 (SceneScript_t1382933591 * __this, GameObject_t4012695102 * ___centerObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::toggleAllCenterColliders()
extern "C"  void SceneScript_toggleAllCenterColliders_m1517480546 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::toggleAllLeaves()
extern "C"  void SceneScript_toggleAllLeaves_m2957262598 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::Main()
extern "C"  void SceneScript_Main_m765471358 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
