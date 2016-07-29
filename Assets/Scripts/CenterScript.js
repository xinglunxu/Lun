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
// var testVariable:int;
// var touchDown:boolean;
// var idleCurve:AnimationCurve;

function Start () {
	ORIGINAL_COLOR = new Color(28.0/255, 150.0/255, 210.0/255);
	HOLDDOWN_COLOR = new Color(0.0/255, 0.0/255, 0.0/255);
	if(number==0)Debug.Log(ORIGINAL_COLOR);
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
}


function touchDowning(bool:boolean){
	anim.SetBool("touchDown", bool);
	// var newSprite:Sprite;
	// if(bool){
		// newSprite = Resources.Load("Objects/Circle");
		// changeSprite(circleSprite);
		// changeColor(HOLDDOWN_COLOR);
		// changeLayer(1);
		// touchDown = true;
		// anim.SetBool("touchDown",true);
		// scale(ORIGINAL_SCALE*2);
	// }
	// else{
		// newSprite = Resources.Load("Objects/Square");
		// Debug.Log("Mouse Released");
		// changeSprite(squareSprite);
		// changeColor(ORIGINAL_COLOR);
		// changeLayer(0);
		// touchDown = false;
		// anim.SetBool("touchDown", false);
		// scale(ORIGINAL_SCALE);
	// }
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

