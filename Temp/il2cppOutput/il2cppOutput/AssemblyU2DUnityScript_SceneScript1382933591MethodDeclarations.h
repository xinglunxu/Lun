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
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.UI.Button
struct Button_t990034267;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UI_UnityEngine_UI_Button990034267.h"

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
// System.Void SceneScript::startPenalty()
extern "C"  void SceneScript_startPenalty_m2430403308 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
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
// System.Void SceneScript::penalty(System.Int32)
extern "C"  void SceneScript_penalty_m3266286391 (SceneScript_t1382933591 * __this, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::resetAllLeaves()
extern "C"  void SceneScript_resetAllLeaves_m553690995 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneScript::isGameOver()
extern "C"  bool SceneScript_isGameOver_m3244978135 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SceneScript::handleGameOver()
extern "C"  Il2CppObject * SceneScript_handleGameOver_m767146817 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SceneScript::pauseGame()
extern "C"  Il2CppObject * SceneScript_pauseGame_m2309832503 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::_pauseGame()
extern "C"  void SceneScript__pauseGame_m1203863342 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SceneScript::resumeGame()
extern "C"  Il2CppObject * SceneScript_resumeGame_m2481487762 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::_resumeGame()
extern "C"  void SceneScript__resumeGame_m2556182139 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::updateHighestScore()
extern "C"  void SceneScript_updateHighestScore_m934944220 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::shuffleAndApplyNewColorAtLeaves()
extern "C"  void SceneScript_shuffleAndApplyNewColorAtLeaves_m3662186399 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SceneScript::startGame()
extern "C"  Il2CppObject * SceneScript_startGame_m2249350307 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SceneScript::restartGame()
extern "C"  Il2CppObject * SceneScript_restartGame_m1737354512 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::_restartGame()
extern "C"  void SceneScript__restartGame_m4052880199 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::showHighestScore()
extern "C"  void SceneScript_showHighestScore_m3407887888 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::hideHighestScore()
extern "C"  void SceneScript_hideHighestScore_m2798871445 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::_startGame()
extern "C"  void SceneScript__startGame_m1143381146 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::foldAllLeaves()
extern "C"  void SceneScript_foldAllLeaves_m1988880185 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::openAllLeaves()
extern "C"  void SceneScript_openAllLeaves_m1216066896 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::enableAllColliders()
extern "C"  void SceneScript_enableAllColliders_m595027750 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::disableAllColliders()
extern "C"  void SceneScript_disableAllColliders_m3754503811 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::toggleCollider(UnityEngine.GameObject)
extern "C"  void SceneScript_toggleCollider_m33023749 (SceneScript_t1382933591 * __this, GameObject_t4012695102 * ___centerObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::toggleAllCenterColliders()
extern "C"  void SceneScript_toggleAllCenterColliders_m1517480546 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::toggleAllLeaves()
extern "C"  void SceneScript_toggleAllLeaves_m2957262598 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::showAllTimeStamps()
extern "C"  void SceneScript_showAllTimeStamps_m757894174 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::hideAllTimeStamps()
extern "C"  void SceneScript_hideAllTimeStamps_m3353220921 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::resetTime()
extern "C"  void SceneScript_resetTime_m1452718937 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::setTimeForTimeStamps()
extern "C"  void SceneScript_setTimeForTimeStamps_m858730236 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::resetScore()
extern "C"  void SceneScript_resetScore_m1027628456 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::showHighestScoreOnScoreBoard()
extern "C"  void SceneScript_showHighestScoreOnScoreBoard_m3632362915 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::hidePauseButton()
extern "C"  void SceneScript_hidePauseButton_m3606918467 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::showPauseButton()
extern "C"  void SceneScript_showPauseButton_m717070184 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::showRestartButton()
extern "C"  void SceneScript_showRestartButton_m2978251457 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::hideRestartButton()
extern "C"  void SceneScript_hideRestartButton_m1278610908 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::showResumeButton()
extern "C"  void SceneScript_showResumeButton_m807208769 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::hideResumeButton()
extern "C"  void SceneScript_hideResumeButton_m198192326 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::hidePlayButton()
extern "C"  void SceneScript_hidePlayButton_m3530142285 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::showPlayButton()
extern "C"  void SceneScript_showPlayButton_m2744184712 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::hideButton(UnityEngine.UI.Button)
extern "C"  void SceneScript_hideButton_m1437297220 (SceneScript_t1382933591 * __this, Button_t990034267 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::showButton(UnityEngine.UI.Button)
extern "C"  void SceneScript_showButton_m669313641 (SceneScript_t1382933591 * __this, Button_t990034267 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::disableButton(UnityEngine.UI.Button)
extern "C"  void SceneScript_disableButton_m1934242214 (SceneScript_t1382933591 * __this, Button_t990034267 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::enableButton(UnityEngine.UI.Button)
extern "C"  void SceneScript_enableButton_m642072227 (SceneScript_t1382933591 * __this, Button_t990034267 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::setLowerButtonPosition(UnityEngine.UI.Button)
extern "C"  void SceneScript_setLowerButtonPosition_m2862219390 (SceneScript_t1382933591 * __this, Button_t990034267 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::setTutorialPosition()
extern "C"  void SceneScript_setTutorialPosition_m1790247814 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::setTutorialScale()
extern "C"  void SceneScript_setTutorialScale_m513465775 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::hideTutorial()
extern "C"  void SceneScript_hideTutorial_m1892219301 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::showTutorial()
extern "C"  void SceneScript_showTutorial_m59001248 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneScript::Main()
extern "C"  void SceneScript_Main_m765471358 (SceneScript_t1382933591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
