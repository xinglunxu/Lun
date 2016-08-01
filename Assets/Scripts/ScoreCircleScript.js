#pragma strict

var sceneScript:SceneScript;
var degreeToTurn:float;
var FLIP_SPEED:float;
var totalScaleAmount:float;
var totalEnlargeAmount:float;
var SCALE_SPEED:float;
var SCALE_TARGET_AMOUNT:float;
var MATCH_AMOUNT:float;
var flippingDirection:Vector3;
var CANVAS_CHILD:int;
var TEXT_CHILD:int;
var position:int;
var textChanged:boolean;
var textObject:UnityEngine.UI.Text;
var number:int;
var TIME_UP_SCALE_AMOUNT:float;
var totalScaleAmountForTime:float;

function Start () {
	CANVAS_CHILD = 0;
	TEXT_CHILD = 0;
	sceneScript = Camera.main.GetComponent(SceneScript);
	FLIP_SPEED = 200*Time.deltaTime;
	SCALE_SPEED = 0.15*Time.deltaTime*3;
	SCALE_TARGET_AMOUNT = 0.05;
	MATCH_AMOUNT = 0.05*3;
	flippingDirection = Vector3(0,1,0);
	degreeToTurn = 0;
	totalScaleAmount = 0;
	totalEnlargeAmount = 0;
	textChanged = true;
	number = 15;
	TIME_UP_SCALE_AMOUNT = 0.3;
	totalScaleAmountForTime = 0;
}

function Update () {
	if(!sceneScript.isTilting && !sceneScript.isScaling) flipping();
	if(!sceneScript.inUserRotation){
		shrink();
		enlarge();
	}
	shrinkForTime();
}

function flipping(){
	if(!sceneScript.inUserRotation && degreeToTurn>0){
		if(degreeToTurn<FLIP_SPEED) transform.Rotate(flippingDirection, degreeToTurn,Space.World);
		else transform.Rotate(flippingDirection, FLIP_SPEED, Space.World);
		degreeToTurn -= FLIP_SPEED;
		if(!textChanged && degreeToTurn<=90) {
			textChanged = true;
			transform.Rotate(flippingDirection, 180 ,Space.World);
			updateText(); 
		}
	}
}

function flip(){
	// sceneScript.inFlip = true;
	textChanged = false;
	degreeToTurn = 180;
}

function shrink(){
	if(totalScaleAmount > 0){
		if(totalScaleAmount < SCALE_SPEED) scale(-totalScaleAmount);
		else scale(-SCALE_SPEED);
		totalScaleAmount -= SCALE_SPEED;
		if(totalScaleAmount<=0) totalEnlargeAmount = SCALE_TARGET_AMOUNT;
	}
	// if(number==0) Debug.Log("tt in shrink: "+totalScaleAmount);
}

function enlarge(){
	if(totalEnlargeAmount > 0){
		if(totalEnlargeAmount < SCALE_SPEED) scale(totalEnlargeAmount);
		else scale(SCALE_SPEED);
		totalEnlargeAmount -= SCALE_SPEED;
		if(totalEnlargeAmount <= 0) sceneScript.isScaling = false;
	}
}

function scale(scaleAmount:float){
	transform.localScale += Vector3(scaleAmount,scaleAmount, scaleAmount); 
}

function triggerMatchAnimation(){
	SCALE_TARGET_AMOUNT = MATCH_AMOUNT;
	// sceneScript.isScaling = true;
	totalScaleAmount = SCALE_TARGET_AMOUNT;
}

function updateText(){
	// var textObject:UnityEngine.UI.Text = transform.GetChild(CANVAS_CHILD).GetChild(TEXT_CHILD).gameObject;
	// Debug.Log(textObject);
	var newNum = sceneScript.scores;
	for(var i:int=0; i<position;i++){
		newNum /= 10;
	}	
	newNum = newNum%10;

	textObject.text = newNum + "";
}

function timeUp(){
	totalScaleAmountForTime = TIME_UP_SCALE_AMOUNT;
}

function shrinkForTime(){
	if(totalScaleAmountForTime > 0){
		if(totalScaleAmountForTime < SCALE_SPEED) scale(-totalScaleAmountForTime);
		else scale(-SCALE_SPEED);
		totalScaleAmountForTime -= SCALE_SPEED;
		// if(totalScaleAmount<=0) totalEnlargeAmount = SCALE_TARGET_AMOUNT;
	}
	// if(number==0) Debug.Log("tt in shrink: "+totalScaleAmount);
}




