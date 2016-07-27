#pragma strict

var color:int;
var number:int;
var degreeToTurn:float;
var FLIP_SPEED:float;
var orientation:Vector3;
var colorChanged:boolean;
var colorDict:Hashtable;
var userRotation:float;
var center:Vector3;
var sceneScript:SceneScript;
var USER_ROTATE_SPEED:float;

function Start () {
	FLIP_SPEED = 200*Time.deltaTime;
	USER_ROTATE_SPEED = 100*Time.deltaTime;
	colorDict = new Hashtable();
	var red = new Color(1,0,0,1);
	var blue = new Color(0,0,1,1);
	var yellow = new Color(1,0.92,0.016,1);
	var green = new Color(0,1,0,1);
	colorDict.Add(0, yellow);
	colorDict.Add(1, red);
	colorDict.Add(2, green);
	sceneScript = Camera.main.GetComponent(SceneScript); 
}

function Update () {
	rotateAroundCenter();
	keepRotate(center);
}


function flip(){
	colorChanged = false;
	degreeToTurn = 180;
}

function rotateAroundCenter(){
	if(degreeToTurn>0){
		if(degreeToTurn<FLIP_SPEED) transform.Rotate(orientation, degreeToTurn,Space.World);
		else transform.Rotate(orientation, FLIP_SPEED, Space.World);
		if(!colorChanged && degreeToTurn<=90) {
			colorChanged = true;
			GetComponent(SpriteRenderer).color = colorDict[color]; 
		}
	}
	degreeToTurn -= FLIP_SPEED;
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
}
