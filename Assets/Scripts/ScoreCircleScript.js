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

function Start () {
	sceneScript = Camera.main.GetComponent(SceneScript);
	FLIP_SPEED = 200*Time.deltaTime;
	SCALE_SPEED = 0.15*Time.deltaTime*3;
	SCALE_TARGET_AMOUNT = 0.05;
	MATCH_AMOUNT = 0.05*3;
	flippingDirection = Vector3(0,1,0);
	degreeToTurn = 0;
	totalScaleAmount = 0;
	totalEnlargeAmount = 0;
}

function Update () {
	if(!sceneScript.isTilting && !sceneScript.isScaling) flipping();
	if(!sceneScript.inUserRotation){
		shrink();
		enlarge();
	}
}

function flipping(){
	if(!sceneScript.inUserRotation && degreeToTurn>0){
		if(degreeToTurn<FLIP_SPEED) transform.Rotate(flippingDirection, degreeToTurn,Space.World);
		else transform.Rotate(flippingDirection, FLIP_SPEED, Space.World);
		degreeToTurn -= FLIP_SPEED;
		// if(!colorChanged && degreeToTurn<=90) {
		// 	colorChanged = true;
		// 	GetComponent(SpriteRenderer).color = sceneScript.colorDict[color]; 
		// }
	}
}

function flip(){
	// sceneScript.inFlip = true;
	// colorChanged = false;
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




