#pragma strict

var number:int;
var circleSprite:Sprite;
var squareSprite:Sprite;
var ORIGINAL_COLOR:Color;
var HOLDDOWN_COLOR:Color;
var ORIGINAL_SCALE:float;
var sceneScript:SceneScript;
var touchDown:boolean;
var anim:Animator;
var curveValue:float;
var lastCurveValue:float;
var originalVectorScale:Vector3;
// var testVariable:int;
// var touchDown:boolean;
// var idleCurve:AnimationCurve;

function Start () {
	originalVectorScale = transform.localScale; 
	curveValue = 1;
	lastCurveValue = -1;
	ORIGINAL_COLOR = new Color(102.0/255, 102.0/255, 153.0/255);
	// ORIGINAL_COLOR = new Color(1, 0, 0);
	HOLDDOWN_COLOR = new Color(0.0/255, 0.0/255, 0.0/255);
	// if(number==0)Debug.Log(ORIGINAL_COLOR);
	changeColor(ORIGINAL_COLOR);
	// testVariable = 0;
	// ORIGINAL_SCALE = transform.localScale.x;
	// if(number==0){
	// 	var animationCurve = Resources.Load("Animations/idle");
	// 	Debug.Log(animationCurve);
	// }
}

function Update () {
	// if(number==1) Debug.Log(testVariable);
	if(curveValue!=lastCurveValue){
		transform.localScale = originalVectorScale * curveValue;
	}

	lastCurveValue = curveValue;
}


function touchDowning(bool:boolean){
	anim.SetBool("touchDown", bool);
}

function changeSprite(sprite:Sprite){
	GetComponent(SpriteRenderer).sprite = sprite;
}

function changeColor(newColor:Color){
	GetComponent(SpriteRenderer).color = newColor;
}

function changeLayer(newLayer:int){
	GetComponent(SpriteRenderer).sortingOrder = newLayer;
}

function scale(value:float){
	transform.localScale = new Vector3(value, value, value);
}

function handleEnlarge(){
	var sr = gameObject.GetComponent(SpriteRenderer);
	sr.sprite = circleSprite;
	sr.color = HOLDDOWN_COLOR;
	sr.sortingOrder = 1;
}

function handleShrink(){
	Debug.Log("handleShrink called");
	var sr = gameObject.GetComponent(SpriteRenderer);
	sr.sprite = squareSprite;
	sr.color = ORIGINAL_COLOR;
	sr.sortingOrder = 0;
}



