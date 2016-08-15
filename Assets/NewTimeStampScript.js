#pragma strict

var textObject:UnityEngine.UI.Text;
var sceneScript:SceneScript;
var anim:Animator;
// var isFliped:boolean;

function Start () {
	sceneScript = Camera.main.GetComponent(SceneScript);
	changeText("X");
	changeColor(sceneScript.colorDict[2]);
	// isFliped = false;
}

function Update () {

}

function changeColor(color:Color){
	gameObject.GetComponent(SpriteRenderer).color = color;
}

function changeText(string:String){
	textObject.text = string;
}

function flip(){
	// changeText("X");
	changeColor(sceneScript.colorDict[0]);
}

function startFlip(){
	anim.SetBool("flip", true);
	// isFliped = true;
}

function unFlip(){
	// changeText("O");
	changeColor(sceneScript.colorDict[2]);
}

function startUnFlip(){
	anim.SetBool("flip", false);
	// isFliped = false;
}

function setRed(){
	anim.SetBool("toRed", true);
}

function setYellow(){
	anim.SetBool("toRed", false);
}

function isFliped(){
	var animInteger = anim.GetInteger("state");
	return animInteger==1 || animInteger==2 || animInteger==5;
}

function isRed(){
	var animInteger = anim.GetInteger("state");
	return animInteger==3 || animInteger==4;
}

function isDoneFliped(){
	return anim.GetInteger("state") == 2;
}

function isDoneBecomeRed(){
	return anim.GetInteger("state") == 4;
}

function fromYellowToRed(){
	// changeText("X");
	changeColor(sceneScript.colorDict[1]);
}

function fromRedToYellow(){
	// changeText("X");
	changeColor(sceneScript.colorDict[0]);
}

function reset(){
	anim.SetBool("reset", true);
}


