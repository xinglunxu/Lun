#pragma strict

var curValue:float;
var lastCurValue:float;
var originalScaleVector:Vector3;
// var sceneScript:SceneScript;

function Start () {
	curValue = 1;
	lastCurValue = -1;
	// sceneScript = Camera.main.GetComponent(SceneScript);
	// var scale = sceneScript.CENTER_HALF_LENGTH *2 / GetComponent(RectTransform).localScale.y;
	// GetComponent(RectTransform).localScale *= scale;
	originalScaleVector = GetComponent(RectTransform).localScale;
}


function Update () {
	applyCurValue();
}

function applyCurValue(){
	if(curValue!=lastCurValue){
		GetComponent(RectTransform).localScale = originalScaleVector * curValue;
	}

	lastCurValue = curValue;
}