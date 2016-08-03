#pragma strict

var ORIGINAL_SCALE:float;
var SHRINK_AMOUNT:float;
var curveValue:float;
var textObject:UnityEngine.UI.Text;
var number:int;
var anim:Animator;

function Start () {
	number = 0;
	textObject.text = "";
	hide();
}

function Update () {
	applyCurveValue();
}

 function applyCurveValue(){
 	transform.localScale = new Vector3(ORIGINAL_SCALE-curveValue*SHRINK_AMOUNT, ORIGINAL_SCALE-curveValue*SHRINK_AMOUNT, ORIGINAL_SCALE-curveValue*SHRINK_AMOUNT);
 }

 function hide(){
 	anim.SetBool("hide", true);
 }

 function show(){
// 	Debug.Log("Show called");
 	anim.SetBool("hide", false);
 }