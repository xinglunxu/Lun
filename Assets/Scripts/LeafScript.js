#pragma strict

var color:int;
var number:int;
var degreeToTurn:float;
var FLIP_SPEED:float;
var orientation:Vector3;
var colorChanged:boolean;
// var colorDict:Hashtable;
var userRotation:float;
var center:Vector3;
var sceneScript:SceneScript;
var USER_ROTATE_SPEED:float;
// var SHRINT_RATE:float;
// var ENLARGE_RATE:float;
// var ORIGIN_SCALE:float;
// var TARGET_SCALE:float;
// var SHRINK_SPEED:float;
var totalScaleAmount:float;
var totalEnlargeAmount:float;
var SCALE_SPEED:float;
// var isScaling:boolean;
var totalTiltAmount:float;
// var isTilting:boolean;
var TILT_SPEED:float;
var totalTiltBackAmount:float;
var TILT_TARGET_AMOUNT;
var SCALE_TARGET_AMOUNT;
var ORIGINAL_X:float;
var ORIGINAL_Y:float;
var ORIGINAL_SCALE:float;
var fakeRotateAmount:float;
var fakeRotateBackwardAmount:float;
var FAKE_ROTATE_AMOUNT:float;
var HIGHLIGHT_AMOUNT:float;
var MATCH_AMOUNT:float;
// var touchDown:boolean;

function Start () {
	FLIP_SPEED = 200*Time.deltaTime;
	USER_ROTATE_SPEED = 100*Time.deltaTime;
	// colorDict = new Hashtable();
	// var red = new Color(1,0,0,1);
	// var blue = new Color(0,0,1,1);
	// var yellow = new Color(1,0.92,0.016,1);
	// var green = new Color(0,1,0,1);
	// var purple = new Color(204.0/255, 0.0, 204.0/255);
	// colorDict.Add(0, yellow);
	// colorDict.Add(1, red);
	// colorDict.Add(2, green);
	sceneScript = Camera.main.GetComponent(SceneScript); 
	// SHRINT_RATE = 0.8*Time.deltaTime;
	// ENLARGE_RATE = 1.25*Time.deltaTime;
	// ORIGIN_SCALE = transform.localScale.x;
	// TARGET_SCALE = 1;
	SCALE_SPEED = 0.15*Time.deltaTime;
	userRotation = 0;
	degreeToTurn = 0;
	totalScaleAmount = 0;
	// isScaling = false;
	totalTiltAmount = 0;
	TILT_SPEED = 30*Time.deltaTime;
	// isTilting = false;
	TILT_TARGET_AMOUNT = 10;
	SCALE_TARGET_AMOUNT = 0.05;
	MATCH_AMOUNT = 0.05;
	HIGHLIGHT_AMOUNT = 0.1;
	ORIGINAL_X = transform.position.x;
	ORIGINAL_Y = transform.position.y;
	ORIGINAL_SCALE = transform.localScale.x;
	fakeRotateAmount = 0;
	fakeRotateBackwardAmount = 0;
	FAKE_ROTATE_AMOUNT = 40;
	// touchDown = false;
}

function Update () {
	if(!sceneScript.isTilting && !sceneScript.isScaling) flipping();
	keepRotate(center);
	fakeRotating(center);
	fakeRotatingBackward(center);
	if(!sceneScript.inUserRotation){
		shrink();
		enlarge();
		tilting();
		tiltingBack();
	}

}


function flip(){
	sceneScript.inFlip = true;
	colorChanged = false;
	degreeToTurn = 180;
}

function flipping(){
	if(!sceneScript.inUserRotation && degreeToTurn>0){
		if(degreeToTurn<FLIP_SPEED) transform.Rotate(orientation, degreeToTurn,Space.World);
		else transform.Rotate(orientation, FLIP_SPEED, Space.World);
		degreeToTurn -= FLIP_SPEED;
		if(!colorChanged && degreeToTurn<=90) {
			colorChanged = true;
			GetComponent(SpriteRenderer).color = sceneScript.colorDict[color]; 
		}
		if(degreeToTurn<=0){
			sceneScript.inFlip = false;
		}
	}
}

function rotate(vector:Vector3, angles:float){
	transform.RotateAround(vector, Vector3(0,0,1), -angles);
}

function keepRotate(center:Vector3){
	if(userRotation>0){
		if(userRotation < USER_ROTATE_SPEED) rotate(center, userRotation);
		else rotate(center, USER_ROTATE_SPEED);
		userRotation -= USER_ROTATE_SPEED;
		if(userRotation<=0) sceneScript.inUserRotation = false;
	}
}

function startRotate(vector:Vector3){
	sceneScript.inUserRotation = true;
	userRotation = 90;
	center = vector;

	// totalScaleAmount = 0.6;
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

function tilting(){
	if(totalTiltAmount >0){
		if(totalTiltAmount<TILT_SPEED) tilt(-totalTiltAmount);
		else tilt(-TILT_SPEED);
		totalTiltAmount -= TILT_SPEED;
		if(totalTiltAmount<=0) totalTiltBackAmount = TILT_TARGET_AMOUNT;
	}
}

function tiltingBack(){
	if(totalTiltBackAmount>0){
		if(totalTiltBackAmount<TILT_SPEED) tilt(totalTiltBackAmount);
		else tilt(TILT_SPEED);
		totalTiltBackAmount -= TILT_SPEED;
		if(totalTiltBackAmount <=0) sceneScript.isTilting = false;
	}
}

function triggerMatchAnimation(){
	SCALE_TARGET_AMOUNT = MATCH_AMOUNT;
	sceneScript.isScaling = true;
	totalScaleAmount = SCALE_TARGET_AMOUNT;
}

function highLight(){
	SCALE_TARGET_AMOUNT = HIGHLIGHT_AMOUNT;
	sceneScript.isScaling = true;
	totalScaleAmount = SCALE_TARGET_AMOUNT;
}

// function touchDowning(bool:boolean){
// 	var newSprite:Sprite;
// 	if(bool){
// 		newSprite = Resources.Load("Objects/Circle");
// 		changeSprite(newSprite);
// 	}
// 	else{
// 		newSprite = Resources.Load("Objects/Square");
// 		changeSprite(newSprite);
// 	}
// }

function scale(scaleAmount:float){
	transform.localScale += Vector3(scaleAmount,scaleAmount, scaleAmount); 
}

function tilt(tiltAmount:float){
	transform.Rotate(Vector3(0,0,1), tiltAmount, Space.World);
}

// function changeSprite(sprite:Sprite){
// 	GetComponent(SpriteRenderer).sprite = sprite;
// }

function startFakeRotate(vector:Vector3){
	sceneScript.inUserRotation = true;
	fakeRotateAmount = FAKE_ROTATE_AMOUNT;
	center = vector;
}


function fakeRotating(center:Vector3){
	if(fakeRotateAmount>0){
		if(fakeRotateAmount<USER_ROTATE_SPEED) rotate(center, fakeRotateAmount);
		else rotate(center, USER_ROTATE_SPEED);
		fakeRotateAmount -= USER_ROTATE_SPEED;
		if(fakeRotateAmount<=0) fakeRotateBackwardAmount = FAKE_ROTATE_AMOUNT;
	}
}

function fakeRotatingBackward(center:Vector3){
	if(fakeRotateBackwardAmount >0){
		if(fakeRotateBackwardAmount<USER_ROTATE_SPEED) rotate(center, -fakeRotateBackwardAmount);
		else rotate(center, -USER_ROTATE_SPEED);
		fakeRotateBackwardAmount -= USER_ROTATE_SPEED;
		if(fakeRotateBackwardAmount<=0) sceneScript.inUserRotation = false;
	}
}


// function approach(vector:Vector3){
// 	transform.position -= (transform.position-vector)*0.2;
// }

// function holdScale(){
// 	transform.localScale *= 0.9;
// }




