#pragma strict

var ROWS:int;
var COLS:int;
var MARGIN:float;
var CENTER_HALF_LENGTH:float;
var CENTER_SCALE:float;
var SCREEN_WIDTH:float;
var SCREEN_HEIGHT:float;
var centerPrefab:GameObject;
var leafPrefab:GameObject;
var LEAF_WIDTH:float;
var VERTICAL_ADJUST:float;
var LEAF_SCALE:float;
var leaves : Array;
var colorDict:Hashtable;
// var RED = 0;
// var GREEN = 1;
var FIRST_COLOR:int;
var SECOND_COLOR:int;
var userRotation:float;
var userRotateLeaves:GameObject[];
var USER_ROTATE_SPEED:float;
var userRotateCenter:Vector3;
var inUserRotation:boolean;
var inFlip:boolean;
var isScaling:boolean;
var isTilting:boolean;
var lastTouchCenter:GameObject;

function Start () {
	
	
	colorDict = new Hashtable();
	var red = new Color(1,0,0,1);
	var blue = new Color(0,0,1,1);
	var yellow = new Color(1,0.92,0.016,1);
	var green = new Color(0,1,0,1);
	colorDict.Add(0, yellow);
	colorDict.Add(1, red);
	colorDict.Add(2, green);
	// FIRST_COLOR = RED;
	// SECOND_COLOR = GREEN;
	ROWS = 5;
	COLS = 4;
	centerPrefab = Resources.Load("Objects/CenterPrefab");
	leafPrefab = Resources.Load("Objects/leafPrefab");

	SCREEN_HEIGHT = Camera.main.orthographicSize * 2;
	SCREEN_WIDTH = SCREEN_HEIGHT * Screen.width / Screen.height;
	MARGIN = 0.00*SCREEN_WIDTH;
	CENTER_SCALE = (SCREEN_WIDTH-MARGIN*2) / (4.5*centerPrefab.GetComponent(Renderer).bounds.size.x);
	CENTER_HALF_LENGTH = CENTER_SCALE * centerPrefab.GetComponent(Renderer).bounds.size.x/2;
	LEAF_WIDTH = 2*(Mathf.Sqrt(2)*CENTER_HALF_LENGTH-CENTER_HALF_LENGTH);
	LEAF_SCALE = 2*CENTER_HALF_LENGTH/leafPrefab.GetComponent(Renderer).bounds.size.y;
	VERTICAL_ADJUST = (SCREEN_HEIGHT-ROWS*2*CENTER_HALF_LENGTH-LEAF_WIDTH)*1/3;
	// Debug.Log(centerPrefab.GetComponent(Renderer).bounds.size.y);
	// Debug.Log(centerPrefab.GetComponent(Renderer).bounds.size.x);
	USER_ROTATE_SPEED = 100*Time.deltaTime;
	userRotateLeaves = new GameObject[4];
	userRotation = 0;
	inUserRotation = false;
	inFlip = false;
	isScaling = false;
	isTilting = false;

	initiateCenters();
	initiateLeafs();
	shuffleAllLeaves();
	setIdleCurve();
	setEnlargeCurve();
	setShrinkCurve();

	// Debug.Log(CENTER_SCALE);
	
	// var testScript = (leaves[0] as GameObject).GetComponent(LeafScript);
	// testScript.triggerMatchAnimation();
	// debugArray(getLeavesFromCol(0));
}


function Update () {
	listenForClickOnCenters();
	// rotateLeaves();
}


function initiateCenters(){
	var startingPosition = new Vector3(-SCREEN_WIDTH/2+MARGIN+0.5*CENTER_HALF_LENGTH+CENTER_HALF_LENGTH, -SCREEN_HEIGHT/2+ LEAF_WIDTH/2 +ROWS*CENTER_HALF_LENGTH*2-CENTER_HALF_LENGTH+VERTICAL_ADJUST,0);
	// Debug.Log(ROWS);
	// Debug.Log(startingPosition.y);
	// var object = Instantiate(centerPrefab, startingPosition, Quaternion.identity) as GameObject;
	var number = 0;
	var i:int;
	var j:int;
	for(i=0; i<ROWS; i++){
		var tempPosition = startingPosition;
		for(j=0; j<COLS; j++){
			// Debug.Log(number);
			var object = Instantiate(centerPrefab, tempPosition, Quaternion.identity) as GameObject;
			object.transform.localScale = Vector3(CENTER_SCALE,CENTER_SCALE,CENTER_SCALE);
			var script = object.GetComponent(CenterScript);
			script.number = number;
			// script.ORIGINAL_SCALE = CENTER_SCALE;
			tempPosition += Vector3(2*CENTER_HALF_LENGTH,0,0);
			number++;
		}

		startingPosition += new Vector3(0,-2*CENTER_HALF_LENGTH,0);
	}

}


function initiateLeafs(){
	var startingEvenPosition = new Vector3(-(COLS/2-0.5)*2*CENTER_HALF_LENGTH,-SCREEN_HEIGHT/2+2*CENTER_HALF_LENGTH*ROWS+LEAF_WIDTH/2+VERTICAL_ADJUST,0);
	var	startingOddPosition = new Vector3(-(COLS/2*2*CENTER_HALF_LENGTH), -SCREEN_HEIGHT/2+LEAF_WIDTH/2+(ROWS-0.5)*2*CENTER_HALF_LENGTH+VERTICAL_ADJUST,0);
	// var object = Instantiate(leafPrefab, startingOddPosition, Quaternion.identity) as GameObject;
	// object.transform.localScale = Vector3(LEAF_SCALE, LEAF_SCALE, LEAF_SCALE);
	// object.transform.Rotate(0,0,90);
	leaves = new Array();
	var tempPosition:Vector3;
	var i:int; var j:int;
	var colorSum = 0; var rand:int=0;
 	var color; var temp:int; var number = 0;
	for(i=0; i<2*ROWS+1; i++){
		if(i%2==0){
			tempPosition = startingEvenPosition;
			for(j=0; j<COLS; j++){
				var object = Instantiate(leafPrefab, tempPosition, Quaternion.identity) as GameObject;
				object.transform.localScale = Vector3(LEAF_SCALE, LEAF_SCALE, LEAF_SCALE);
				object.transform.Rotate(0,0,90);
				rand = Random.Range(0,2.999);
				var script = object.GetComponent(LeafScript);
				script.color = rand;
				script.number = number;
				script.orientation = Vector3(1,0,0);
				// Debug.Log(colorDict[rand]);
				object.GetComponent(SpriteRenderer).color = colorDict[rand];
				leaves.Push(object);
				tempPosition += Vector3(2*CENTER_HALF_LENGTH,0,0);
				number++;
			}
			colorSum = 0;
			startingEvenPosition += Vector3(0,-2*CENTER_HALF_LENGTH,0);
		}
		else{
			tempPosition = startingOddPosition;
			for(j=0; j<COLS+1; j++){
				object = Instantiate(leafPrefab, tempPosition, Quaternion.identity) as GameObject;
				object.transform.localScale = Vector3(LEAF_SCALE, LEAF_SCALE, LEAF_SCALE);
				rand = Random.Range(0,1.999);
				script = object.GetComponent(LeafScript);
				script.color = rand;
				script.number = number;
				script.orientation = Vector3(0,1,0);
				object.GetComponent(SpriteRenderer).color = colorDict[rand];
				leaves.Push(object);
				tempPosition += Vector3(2*CENTER_HALF_LENGTH,0,0);
				number++;
			}
			colorSum = 0;
			startingOddPosition += Vector3(0,-2*CENTER_HALF_LENGTH,0);
		}

	}
	
}


function getLeavesFromRow(i:int):Array{
	var returnArray:Array = new Array();
	var startingPoint:int = i*(COLS*2+1);
	for(var index=0; index<COLS; index++){
		returnArray.Push(leaves[startingPoint+index]);
	}

	return returnArray;
}

function getLeavesFromCol(index:int):Array{
	var returnArray:Array = new Array();
	var startingPoint:int = COLS + index;
	for(var i=0; i<ROWS; i++){
		returnArray.Push(leaves[startingPoint+i*(COLS*2+1)]);
	}

	return returnArray;
}

function isRowSparseAt(index:int):boolean{
	return isArraySparse(getLeavesFromRow(index));
}

function isColSparseAt(index:int):boolean{
	return isArraySparse(getLeavesFromCol(index));
}

function isArraySparse(array:Array):boolean{
	var lastColor:int = -1;
	var accumulator = 1;
	for(var i=0; i<array.length; i++){
		var object:GameObject = array[i];
		var script = object.GetComponent(LeafScript);
		var color = script.color;
		if(lastColor!=color) accumulator = 0;
		accumulator++;
		lastColor = color;
		if(accumulator>=3) return false;
	}
	return true;
}

function shuffleColorsAtArray(array:Array){
	var rand:int;
	for(var i=0;i<array.length;i++){
		rand = Random.Range(0,2.999);
		var object:GameObject = array[i];
		var script = object.GetComponent(LeafScript);
		script.color = rand;
	}
}

function shuffleColorsAtRow(index:int){
	shuffleColorsAtArray(getLeavesFromRow(index));
}

function shuffleColorsAtCol(index:int){
	shuffleColorsAtArray(getLeavesFromCol(index));
}

function applyNewColorAtArray(array:Array){
	for(var i=0; i<array.length;i++){
		var object:GameObject = array[i];
		var script = object.GetComponent(LeafScript);
		object.GetComponent(SpriteRenderer).color = colorDict[script.color];
	}
}

function applyNewColorAtRow(index:int){
	applyNewColorAtArray(getLeavesFromRow(index));
}

function applyNewColorAtCol(index:int){
	applyNewColorAtArray(getLeavesFromCol(index));
}

function shuffleAllLeaves(){
	Debug.Log("shuffleAllLeaves called");
	var i:int;
	for(i=0; i<ROWS+1;i++){
		while(!isRowSparseAt(i)){shuffleColorsAtRow(i);}
		applyNewColorAtRow(i);
		// Debug.Log(isRowSparseAt(i));
	}
	// Debug.Log("Check");
	for(i=0; i<COLS+1;i++){
		while(!isColSparseAt(i)) shuffleColorsAtCol(i);
		applyNewColorAtCol(i);
		// Debug.Log(isColSparseAt(i));
	}
}

function debugArray(array:Array){
	for(var i=0; i<array.length;i++){
		var object:GameObject = array[i];
		var script = object.GetComponent(LeafScript);
		// Debug.Log("Leaf "+script.number+" with Color: "+script.color+" and true color: "+object.GetComponent(SpriteRenderer).color);
	}
}

function listenForClickOnCenters(){
	if(Input.GetMouseButton(0)){
		var hit:RaycastHit;
		var ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		if(Physics.Raycast(ray,hit)){
			var object = hit.transform.gameObject;
			var script = object.GetComponent(CenterScript);
			if(lastTouchCenter != null && object!=lastTouchCenter){
				lastTouchCenter.GetComponent(CenterScript).touchDowning(false);
			}
			script.touchDowning(true);
			lastTouchCenter = object;
		}
	}

	if(Input.GetMouseButtonUp(0)){
		ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		if(Physics.Raycast(ray,hit)){
			lastTouchCenter.GetComponent(CenterScript).touchDowning(false);
			object = hit.transform.gameObject;
			script = object.GetComponent(CenterScript);
			if(!inUserRotation && !inFlip && !isScaling && !isTilting){
				RotateCenter(script.number, object.transform.position);
				handleEventsAfterRotatingCenter(script.number);
			}
		}
		
	}
}

function RotateCenter(index:int, vector:Vector3){
	// inUserRotation = true;
	// var testScript = (leaves[0] as GameObject).GetComponent(LeafScript);
	// testScript.triggerMatchAnimation();
	var leftLeaf = getLeftLeafFromCenter(index);
	var rightLeaf = getRightLeafFromCenter(index);
	var topLeaf = getTopLeafFromCenter(index);
	var botLeaf = getBotLeafFromCenter(index);

	var leftLeafObject:GameObject = leaves[leftLeaf];
	var rightLeafObject:GameObject = leaves[rightLeaf];
	var topLeafObject:GameObject = leaves[topLeaf];
	var botLeafObject:GameObject = leaves[botLeaf];

	leaves[leftLeaf] = botLeafObject;
	leaves[topLeaf] = leftLeafObject;
	leaves[rightLeaf] = topLeafObject;
	leaves[botLeaf] = rightLeafObject;

	var leftLeafScript = leftLeafObject.GetComponent(LeafScript);
	var rightLeafScript = rightLeafObject.GetComponent(LeafScript);
	var topLeafScript = topLeafObject.GetComponent(LeafScript);
	var botLeafScript = botLeafObject.GetComponent(LeafScript);

	leftLeafScript.startRotate(vector);
	rightLeafScript.startRotate(vector);
	topLeafScript.startRotate(vector);
	botLeafScript.startRotate(vector);

	leftLeafScript.orientation = Vector3(1,0,0);
	rightLeafScript.orientation = Vector3(1,0,0);
	topLeafScript.orientation = Vector3(0,1,0);
	botLeafScript.orientation = Vector3(0,1,0);
}

// function rotateLeaf(leaf:GameObject, vector:Vector3, angles:float){
// 	leaf.transform.RotateAround(vector, Vector3(0,0,1), -angles);
// }

function getLeftLeafFromCenter(index:int):int{
	return COLS+(COLS*2+1)*(index/COLS)+index%COLS;
}

function getRightLeafFromCenter(index:int):int{
	return getLeftLeafFromCenter(index)+1;
}

function getTopLeafFromCenter(index:int):int{
	return (COLS*2+1)*(index/COLS)+index%4;
}

function getBotLeafFromCenter(index:int):int{
	return getTopLeafFromCenter(index)+COLS*2+1;
}

// function rotateLeaves(){
// 	if(userRotation>0){
// 		for(var i=0; i<userRotateLeaves.Length; i++){
// 			if(userRotation < USER_ROTATE_SPEED) rotateLeaf(userRotateLeaves[i],userRotateCenter,userRotation);
// 			else rotateLeaf(userRotateLeaves[i],userRotateCenter,USER_ROTATE_SPEED);
// 		}

// 		userRotation -= USER_ROTATE_SPEED;
// 	}
// 	else inUserRotation = false;
// }

function getFlipingLeavesFromRow(index:int):Array{
	return getFlippingLeavesFromArray(getLeavesFromRow(index));
}

function getFlipingLeavesFromCol(index:int):Array{
	return getFlippingLeavesFromArray(getLeavesFromCol(index));
}

function getFlippingLeavesFromArray(array:Array):Array{
	// var colors:int[] = new int[3];
	var result:Array = new Array();
	var lastColor:int = -1;
	for(var i=0; i<array.length; i++){
		var object:GameObject = array[i];
		var script = object.GetComponent(LeafScript);
		var currentColor = script.color;
		if(currentColor==lastColor) result.Push(object);
		else{
			if(result.length>2) return result;
			else result = new Array();
			result.Push(object);
		}

		lastColor = currentColor;
	}

	if(result.length < 3) return new Array();
	// var maxColor:int; var maxColorIndex:int;
	// for(var i:int=0; i<colors.length;i++){
	// 	colors[i] = 0;
	// }

	// for(i=0; i<array.length;i++){
	// 	var object:GameObject = array[i];
	// 	var script = object.GetComponent(LeafScript);
	// 	colors[script.color]++;
	// }

	// maxColor = Mathf.Max(colors[0],colors[1],colors[2]);
	// if(maxColor<3) return result;

	// for(i=0; i<colors.length; i++){
	// 	if(maxColor==colors[i]) maxColorIndex = i;
	// }

	// for(i=0; i<array.length;i++){
	// 	object = array[i];
	// 	script = object.GetComponent(LeafScript);
	// 	if(script.color == maxColorIndex) result.Push(object);
	// }

	return result;
}


function getLeftColNumFromCenterNum(index:int):int{
	return index%COLS;
}

function getRightColNumFromCenterNum(index:int):int{
	return getLeftColNumFromCenterNum(index)+1;
}

function getTopRowNumFromCenterNum(index:int):int{
	return index/COLS;
}

function getBotRowNumFromCenterNum(index:int):int{
	return index/COLS+1;
}

function handleEventsAfterRotatingCenter(centerIndex:int){
	var leftCol:int = getLeftColNumFromCenterNum(centerIndex);
	var rightCol:int = getRightColNumFromCenterNum(centerIndex);
	var topRow:int = getTopRowNumFromCenterNum(centerIndex);
	var botRow:int = getBotRowNumFromCenterNum(centerIndex);

	var leftCombo = getFlipingLeavesFromCol(leftCol);
	var rightCombo = getFlipingLeavesFromCol(rightCol);
	var topCombo = getFlipingLeavesFromRow(topRow);
	var botCombo = getFlipingLeavesFromRow(botRow);

	do {shuffleColorsAtArray(leftCombo);} while(!isColSparseAt(leftCol));
	do {shuffleColorsAtArray(rightCombo);} while(!isColSparseAt(rightCol));
	do {shuffleColorsAtArray(topCombo);} while(!isRowSparseAt(topRow));
	do {shuffleColorsAtArray(botCombo);} while(!isRowSparseAt(botRow));

	triggerMatchAnimationAtArray(leftCombo);
	triggerMatchAnimationAtArray(rightCombo);
	triggerMatchAnimationAtArray(topCombo);
	triggerMatchAnimationAtArray(botCombo);

	flipLeavesAtArray(leftCombo);
	flipLeavesAtArray(rightCombo);
	flipLeavesAtArray(topCombo);
	flipLeavesAtArray(botCombo);

}

function flipLeavesAtArray(array:Array){
	for(var i:int=0; i<array.length; i++){
		var object:GameObject = array[i];
		var script = object.GetComponent(LeafScript);
		script.flip();
	}
}

function triggerMatchAnimationAtArray(array:Array){
	for(var i:int=0; i<array.length; i++){
		var object:GameObject = array[i];
		var script = object.GetComponent(LeafScript);
		script.triggerMatchAnimation();
	}
}

function setIdleCurve(){
	var curve:AnimationCurve = new AnimationCurve(new Keyframe(0,CENTER_SCALE), new Keyframe(1,CENTER_SCALE));
	var ac:AnimationClip = Resources.Load("Animations/idle");
	ac.SetCurve("", Transform, "localScale.x", curve);
	ac.SetCurve("", Transform, "localScale.y", curve);
}

function setEnlargeCurve(){
	var curve:AnimationCurve = new AnimationCurve(new Keyframe(0, CENTER_SCALE*1.2), new Keyframe(0.3, CENTER_SCALE*2));
	var ac:AnimationClip = Resources.Load("Animations/enlarge");
	ac.SetCurve("", Transform, "localScale.x", curve);
	ac.SetCurve("", Transform, "localScale.y", curve);
}

function setShrinkCurve(){
	var curve:AnimationCurve = new AnimationCurve(new Keyframe(0,CENTER_SCALE*2), new Keyframe(0.3, CENTER_SCALE*1.2));
	var ac:AnimationClip = Resources.Load("Animations/shrink");
	ac.SetCurve("", Transform, "localScale.x", curve);
	ac.SetCurve("", Transform, "localScale.y", curve);
}









