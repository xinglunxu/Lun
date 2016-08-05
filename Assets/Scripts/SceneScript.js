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
var totalColorNum:int;
var CENTER_NUM:int;
var needCheckDeadlock:boolean;
var lastSuccessfulRotationTime:float;
var hintTime:float;
var colorForHint:int;
var scoreCirclePrefab:GameObject;
var UIStartingPosition:float;
var EMPTY_SPACE:float;
var SCORE_CIRCLE_SCALE:float;
var SCORE_CIRCLE_NUM:int;
var hintArray:Array;
var scores:int;
var scoreBoard:Array;
var TIME_STAMP_LENGTH:float;
var TIME_STAMP_SCALE:float;
var TIME_STAMP_NUM:int;
var timeStamps:Array;
var accuTime:int;
var canvas:Canvas;
var isScoreAdded:boolean;
var scoreToAdded:int;
var gameStartTime:float;
var centers:Array;
var isGameOverHandled:boolean;
var GAME_TIME:float;
var leavesAreOpen:boolean;
var collidersEnable:boolean;
var timeStampPrefab:GameObject;
var isPause:boolean;
var scoreBoardInRotation:boolean;
var STAMP_INITTIME:int;
var canvasScaler:UnityEngine.UI.CanvasScaler;
var UIScaleFactorX:float;
var UIScaleFactorY:float;

var tutorial:UnityEngine.UI.Text;
var addScoreText:UnityEngine.UI.Text;
var highestScoreText:UnityEngine.UI.Text;

var startButton:UnityEngine.UI.Button;
var pauseButton:UnityEngine.UI.Button;
var resumeButton:UnityEngine.UI.Button;
var restartButton:UnityEngine.UI.Button;


function Start () {
	STAMP_INITTIME = 15;
	scoreBoardInRotation = false;
	isPause = false;
	isGameOverHandled = true;
	collidersEnable = true;
	leavesAreOpen = false;
	Application.targetFrameRate = 60;
	centers = new Array();
	scoreToAdded = 0;
	isScoreAdded = false;
	accuTime = 0;
	scoreBoard = new Array();
	scores = 0;
	hintTime = 7;
	colorForHint = -1;
	lastSuccessfulRotationTime = Time.time;
	colorDict = new Hashtable();
	var red = new Color(1,0,0,1);
	var blue = new Color(0,0,1,1);
	var yellow = new Color(1,0.92,0.016,1);
	var green = new Color(0,1,0,1);
	var purple = new Color(204.0/255, 0.0, 204.0/255);
	colorDict.Add(0, yellow);
	colorDict.Add(1, red);
	colorDict.Add(2, green);
	colorDict.Add(3, purple);
	totalColorNum = 4;
	// FIRST_COLOR = RED;
	// SECOND_COLOR = GREEN;
	ROWS = 5;
	COLS = 4;
	CENTER_NUM = ROWS*COLS;

	SCORE_CIRCLE_NUM = 3;
	
	centerPrefab = Resources.Load("Objects/CenterPrefab");
	leafPrefab = Resources.Load("Objects/leafPrefab");
	scoreCirclePrefab = Resources.Load("Objects/ScoreCircle");
	timeStampPrefab = Resources.Load("Objects/TimeStampPrefab");

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

	TIME_STAMP_LENGTH = SCREEN_WIDTH/9.5;

	if(TIME_STAMP_LENGTH>VERTICAL_ADJUST) TIME_STAMP_LENGTH = VERTICAL_ADJUST;

	TIME_STAMP_SCALE = TIME_STAMP_LENGTH/scoreCirclePrefab.GetComponent(Renderer).bounds.size.x;
	TIME_STAMP_NUM = 6;
	timeStamps = new Array();

	UIStartingPosition = VERTICAL_ADJUST + ROWS*CENTER_SCALE*centerPrefab.GetComponent(Renderer).bounds.size.x+LEAF_WIDTH;
	// Debug.Log(UIStartingPosition);
	EMPTY_SPACE = SCREEN_HEIGHT - UIStartingPosition;
	if(EMPTY_SPACE>=CENTER_SCALE*centerPrefab.GetComponent(Renderer).bounds.size.x){
		SCORE_CIRCLE_SCALE = CENTER_SCALE*centerPrefab.GetComponent(Renderer).bounds.size.x/scoreCirclePrefab.GetComponent(Renderer).bounds.size.x;
	}
	else{
		SCORE_CIRCLE_SCALE = EMPTY_SPACE/scoreCirclePrefab.GetComponent(Renderer).bounds.size.x;
	}

	// Debug.Log(SCORE_CIRCLE_SCALE*scoreCirclePrefab.GetComponent(Renderer).bounds.size.x);
	// Debug.Log(CENTER_SCALE*centerPrefab.GetComponent(Renderer).bounds.size.x);

	initiateCenters();
	initiateLeafs();

	do{
		shuffleAllLeaves();
	}
	while(isDeckLock());
	applyNewColorAtAllLeaves();

	setIdleCurve();
	setEnlargeCurve();
	setShrinkCurve();

	needCheckDeadlock = false;

	initiateScoreBoard();
	initiateTimeStamps();

	disableAllColliders();
	showHighestScoreOnScoreBoard();
	showPlayButton();
	// setStartButtonPosition();

	UIScaleFactorX = Screen.width / SCREEN_WIDTH;
	UIScaleFactorY = Screen.height / SCREEN_HEIGHT;
	adjustButtons();
	// Debug.Log(SCREEN_HEIGHT);
	// Debug.Log(SCREEN_WIDTH);
	// hidePauseButton();

	// startGame();
	// Debug.Log((scoreBoard[0] as GameObject).transform.GetChild(0).GetChild(0));
}


function adjustButtons(){
	setLowerButtonPosition(startButton,0);
	setLowerButtonPosition(resumeButton, -CENTER_HALF_LENGTH*1.5);
	setLowerButtonPosition(restartButton, CENTER_HALF_LENGTH*1.5);
	setTutorialPosition();
	setTutorialScale();
	setHighestScorePosition();

	scaleAddedScoreText();
	scaleHighestScore();
	scaleStartButton();
	scaleButton(pauseButton,1);
	scaleButton(resumeButton,2);
	scaleButton(restartButton,2);
}

function Update () {
	if(isScoreAdded && !inUserRotation && !isScaling){
			if(scoreToAdded>=0) bingo(scoreToAdded);
			else penalty(scoreToAdded);
			// bingo(scoreToAdded);
			isScoreAdded = false;
	}

	if(isOneSecPass() && !isPause){
			subtractOneSec();
			updateAccumTime();
	}

	if(isGameOver()){
		if(!isGameOverHandled && !inUserRotation && !isScaling && !inFlip){
			handleGameOver();
			isGameOverHandled = true;
		}
	}
	else{
		listenForClickOnCenters();
		handleHint();

		if(needCheckDeadlock==true && !inFlip){
			handleDecklock();
			needCheckDeadlock = false;
		}

	}
	// isHintNeeded();
	// rotateLeaves();
}

function initiateScoreBoard(){
	var startingX = (SCREEN_WIDTH-SCORE_CIRCLE_SCALE*3*scoreCirclePrefab.GetComponent(Renderer).bounds.size.x)/2+scoreCirclePrefab.GetComponent(Renderer).bounds.size.x*SCORE_CIRCLE_SCALE/2- SCREEN_WIDTH/2 ;
	var startingPosition = new Vector3(startingX, SCREEN_HEIGHT/2 - EMPTY_SPACE/2, 0);
	// Debug.Log(startingPosition);
	var object1 = createScoreCircle(startingPosition, new Color(1,0,0,1),2);
	startingPosition += new Vector3(scoreCirclePrefab.GetComponent(Renderer).bounds.size.x*SCORE_CIRCLE_SCALE, 0,0);
	var object2 = createScoreCircle(startingPosition, new Color(1,0.92,0.016,1),1);
	startingPosition += new Vector3(scoreCirclePrefab.GetComponent(Renderer).bounds.size.x*SCORE_CIRCLE_SCALE, 0,0);
	var object3 = createScoreCircle(startingPosition, new Color(0,1,0,1),0);
	scoreBoard.Push(object1);
	scoreBoard.Push(object2);
	scoreBoard.Push(object3);
}

function createScoreCircle(vector:Vector3, color:Color, position:int):GameObject{
	var object = Instantiate(scoreCirclePrefab, vector, Quaternion.identity) as GameObject;
	var originalScale = object.transform.localScale.x;
	var script = object.GetComponent(ScoreCircleScript);
	object.transform.localScale = Vector3(SCORE_CIRCLE_SCALE*originalScale,SCORE_CIRCLE_SCALE*originalScale,0);
	object.GetComponent(SpriteRenderer).color = color;
	script.position = position;
	return object;
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
			var originalScale = object.transform.localScale.x;
			object.transform.localScale = Vector3(CENTER_SCALE*originalScale,CENTER_SCALE*originalScale,0);
			var script = object.GetComponent(CenterScript);
			script.number = number;
			// script.ORIGINAL_SCALE = CENTER_SCALE;
			tempPosition += Vector3(2*CENTER_HALF_LENGTH,0,0);
			number++;
			centers.Push(object);
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
 	// Debug.Log("initiateLeafs here");
	for(i=0; i<2*ROWS+1; i++){
		if(i%2==0){
			tempPosition = startingEvenPosition;
			for(j=0; j<COLS; j++){
				var object = Instantiate(leafPrefab, tempPosition, Quaternion.identity) as GameObject;
				object.transform.localScale = Vector3(LEAF_SCALE, LEAF_SCALE, LEAF_SCALE);
				object.transform.Rotate(0,0,90);
				rand = Random.Range(0,totalColorNum-0.0001);
				var script = object.GetComponent(LeafScript);
				script.color = rand;
				script.number = number;
				script.orientation = Vector3(1,0,0);
				// object.transform.Rotate(90,0,0);
				script.ORIGINAL_SCALE = LEAF_SCALE;
				// Debug.Log(colorDict[rand]);
				object.GetComponent(SpriteRenderer).color = colorDict[rand];
				leaves.Push(object);
				tempPosition += Vector3(2*CENTER_HALF_LENGTH,0,0);
				// Debug.Log(number+" "+script.color);
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
				rand = Random.Range(0,totalColorNum-0.0001);
				// object.transform.Rotate(0,90,0);
				script = object.GetComponent(LeafScript);
				script.color = rand;
				script.number = number;
				script.ORIGINAL_SCALE = LEAF_SCALE;
				script.orientation = Vector3(0,1,0);
				object.GetComponent(SpriteRenderer).color = colorDict[rand];
				leaves.Push(object);
				tempPosition += Vector3(2*CENTER_HALF_LENGTH,0,0);
				// Debug.Log(number+" "+script.color);
				number++;			}
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
		rand = Random.Range(0,totalColorNum-0.0001);
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
	// Debug.Log("shuffleAllLeaves called");
	var i:int;
	for(i=0; i<ROWS+1;i++){
		do{shuffleColorsAtRow(i);} while(!isRowSparseAt(i));
		// applyNewColorAtRow(i);
		// Debug.Log(isRowSparseAt(i));
	}
	// Debug.Log("Check");
	for(i=0; i<COLS+1;i++){
		do{shuffleColorsAtCol(i);} while(!isColSparseAt(i));
		// applyNewColorAtCol(i);
		// Debug.Log(isColSparseAt(i));
	}
}


function applyNewColorAtAllLeaves(){
	var i:int;
	for(i=0; i<ROWS+1;i++){
		// while(!isRowSparseAt(i)){shuffleColorsAtRow(i);}
		applyNewColorAtRow(i);
		// Debug.Log(isRowSparseAt(i));
	}
	// Debug.Log("Check");
	for(i=0; i<COLS+1;i++){
		// while(!isColSparseAt(i)) shuffleColorsAtCol(i);
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
		else{
			if(lastTouchCenter!=null)lastTouchCenter.GetComponent(CenterScript).touchDowning(false);
			lastTouchCenter = null;
		}
	}

	if(Input.GetMouseButtonUp(0)){
		ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		if(Physics.Raycast(ray,hit)){
			if(lastTouchCenter!=null) lastTouchCenter.GetComponent(CenterScript).touchDowning(false);
			object = hit.transform.gameObject;
			script = object.GetComponent(CenterScript);
			if(!inUserRotation && !inFlip && !isScaling && !isTilting && !needCheckDeadlock && !scoreBoardInRotation){
				handleRotatation(script.number, object.transform.position);
				// handleEventsAfterRotatingCenter(script.number);
			}
		}
		
	}
}

function handleRotatation(index:int, vector:Vector3){
	// inUserRotation = true;
	// var testScript = (leaves[0] as GameObject).GetComponent(LeafScript);
	// testScript.triggerMatchAnimation();
	resetAllLeaves();
	var leftLeaf = getLeftLeafFromCenter(index);
	var rightLeaf = getRightLeafFromCenter(index);
	var topLeaf = getTopLeafFromCenter(index);
	var botLeaf = getBotLeafFromCenter(index);

	// Debug.Log(leftLeaf);
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

	if(isRotationValid(index)){
		// Debug.Log("valid");

		leftLeafScript.startRotate(vector);
		rightLeafScript.startRotate(vector);
		topLeafScript.startRotate(vector);
		botLeafScript.startRotate(vector);

		leftLeafScript.orientation = Vector3(1,0,0);
		rightLeafScript.orientation = Vector3(1,0,0);
		topLeafScript.orientation = Vector3(0,1,0);
		botLeafScript.orientation = Vector3(0,1,0);

		handleEventsAfterRotatingCenter(index);
		needCheckDeadlock = true;
		lastSuccessfulRotationTime = Time.time;
		// Debug.Log(lastSuccessfulRotationTime);
	}
	else{
		// Debug.Log("notValid");
		leaves[leftLeaf] = leftLeafObject;
		leaves[topLeaf] = topLeafObject;
		leaves[rightLeaf] = rightLeafObject;
		leaves[botLeaf] = botLeafObject;
		leftLeafScript.startFakeRotate(vector);
		rightLeafScript.startFakeRotate(vector);
		topLeafScript.startFakeRotate(vector);
		botLeafScript.startFakeRotate(vector);
		startPenalty();
	}


}

function startPenalty(){
	scoreToAdded = -2;
	isScoreAdded = true;
	addScores(scoreToAdded);
	shrinkEnlargeFlipScoreBoard();
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
	var addedScore = getComboNum(centerIndex);
	addScores(addedScore);
	scoreToAdded = addedScore;
	isScoreAdded = true;
	// bingo(addedScore);

	// Debug.Log(scores);

	shrinkEnlargeFlipScoreBoard();

	shuffleAndFlipLeftCol(centerIndex);
	shuffleAndFlipRightCol(centerIndex);
	shuffleAndFlipTopRow(centerIndex);
	shuffleAndFlipBotRow(centerIndex);
}

function shrinkEnlargeFlipScoreBoard(){
	scoreBoardInRotation = true;
	for(var i:int=0; i<scoreBoard.length;i++){
		var object:GameObject = scoreBoard[i];
		var script = object.GetComponent(ScoreCircleScript);
		script.triggerMatchAnimation();
		script.flip();
	}
}

function getComboNum(index:int):int{
	var leftCol:int = getLeftColNumFromCenterNum(index);
	var leftCombo = getFlipingLeavesFromCol(leftCol);
	var rightCol:int = getRightColNumFromCenterNum(index);
	var rightCombo = getFlipingLeavesFromCol(rightCol);
	var topRow:int = getTopRowNumFromCenterNum(index);
	var topCombo = getFlipingLeavesFromRow(topRow);
	var botRow:int = getBotRowNumFromCenterNum(index);
	var botCombo = getFlipingLeavesFromRow(botRow);

	return leftCombo.length+rightCombo.length+topCombo.length+botCombo.length;
}

function addScores(comboScore:int){
	scores += comboScore;
	if(scores<0) scores = 0;
	if(scores>999) scores = 999;
}


function shuffleAndFlipLeftCol(index:int){
	var leftCol:int = getLeftColNumFromCenterNum(index);
	var leftCombo = getFlipingLeavesFromCol(leftCol);
	do {shuffleColorsAtArray(leftCombo);} while(!isColSparseAt(leftCol));
	triggerMatchAnimationAtArray(leftCombo);
	flipLeavesAtArray(leftCombo);
}

function shuffleAndFlipRightCol(index:int){
	var rightCol:int = getRightColNumFromCenterNum(index);
	var rightCombo = getFlipingLeavesFromCol(rightCol);
	do {shuffleColorsAtArray(rightCombo);} while(!isColSparseAt(rightCol));
	triggerMatchAnimationAtArray(rightCombo);
	flipLeavesAtArray(rightCombo);
}

function shuffleAndFlipTopRow(index:int){
	var topRow:int = getTopRowNumFromCenterNum(index);
	var topCombo = getFlipingLeavesFromRow(topRow);
	do {shuffleColorsAtArray(topCombo);} while(!isRowSparseAt(topRow));
	triggerMatchAnimationAtArray(topCombo);
	flipLeavesAtArray(topCombo);
}

function shuffleAndFlipBotRow(index:int){
	var botRow:int = getBotRowNumFromCenterNum(index);
	var botCombo = getFlipingLeavesFromRow(botRow);
	do {shuffleColorsAtArray(botCombo);} while(!isRowSparseAt(botRow));
	triggerMatchAnimationAtArray(botCombo);
	flipLeavesAtArray(botCombo);
}

function isRotationValid(index:int):boolean{
	return isComboInLeftCol(index)||isComboInRightCol(index)||isComboInTopRow(index)||isComboInBotRow(index);
}

function isComboInLeftCol(index:int):boolean{
	var leftCol:int = getLeftColNumFromCenterNum(index);
	var leftCombo = getFlipingLeavesFromCol(leftCol);
	// Debug.Log("isComboInLeftCol :"+leftCombo.length);
	return leftCombo.length>0;
}

function isComboInRightCol(index:int):boolean{
	var rightCol:int = getRightColNumFromCenterNum(index);
	var rightCombo = getFlipingLeavesFromCol(rightCol);
	// Debug.Log("isComboInRightCol :"+rightCombo.length);
	return rightCombo.length>0;
}

function isComboInTopRow(index:int):boolean{
	var topRow:int = getTopRowNumFromCenterNum(index);
	var topCombo = getFlipingLeavesFromRow(topRow);
	// Debug.Log("isComboInTopRow :"+topCombo.length);
	return topCombo.length>0;
}

function isComboInBotRow(index:int):boolean{
	var botRow:int = getBotRowNumFromCenterNum(index);
	var botCombo = getFlipingLeavesFromRow(botRow);
	// Debug.Log("isComboInBotRow :"+botCombo.length);
	return botCombo.length>0;
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

function isDeckLock():boolean{
	for(var i:int=0; i<CENTER_NUM; i++){
		// Debug.Log(i);
		var leftCol:int = getLeftColNumFromCenterNum(i);
		var rightCol:int = getRightColNumFromCenterNum(i);
		var topRow:int = getTopRowNumFromCenterNum(i);
		var botRow:int = getBotRowNumFromCenterNum(i);

		var leftLeaf = getLeftLeafFromCenter(i);
		var rightLeaf = getRightLeafFromCenter(i);
		var topLeaf = getTopLeafFromCenter(i);
		var botLeaf = getBotLeafFromCenter(i);

		var leftLeafObject:GameObject = leaves[leftLeaf];
		var rightLeafObject:GameObject = leaves[rightLeaf];
		var topLeafObject:GameObject = leaves[topLeaf];
		var botLeafObject:GameObject = leaves[botLeaf];

		leaves[leftLeaf] = botLeafObject;
		leaves[topLeaf] = leftLeafObject;
		leaves[rightLeaf] = topLeafObject;
		leaves[botLeaf] = rightLeafObject;

		var leftCombo = getFlipingLeavesFromCol(leftCol);
		var rightCombo = getFlipingLeavesFromCol(rightCol);
		var topCombo = getFlipingLeavesFromRow(topRow);
		var botCombo = getFlipingLeavesFromRow(botRow);

		leaves[leftLeaf] = leftLeafObject;
		leaves[topLeaf] = topLeafObject;
		leaves[rightLeaf] = rightLeafObject;
		leaves[botLeaf] = botLeafObject;


		if(leftCombo.length>0 || rightCombo.length>0 || topCombo.length>0 || botCombo.length>0){
			// Debug.Log("turn "+i);
			// var colorForHint = -1;
			if(leftCombo.length>0) hintArray = leftCombo;
			else if(rightCombo.length>0) hintArray = rightCombo;
			else if(topCombo.length>0) hintArray = topCombo;
			else hintArray = botCombo;
			return false;
		}
	}	

	return true;
}


function handleDecklock(){
	var bool:boolean = isDeckLock();
	// Debug.Log(bool);
	if(bool){
		do{shuffleAllLeaves();} while(isDeckLock());
		flipAllLeaves();
	}
}

function flipAllLeaves(){
	for(var i:int; i<leaves.length;i++){
		(leaves[i] as GameObject).GetComponent(LeafScript).flip();
	}
}

function isHintNeeded():boolean{
	return Time.time- lastSuccessfulRotationTime >=hintTime;
}

function handleHint(){
	if(isHintNeeded()){
		lastSuccessfulRotationTime = Time.time;
		// Debug.Log(hintArray);
		highlightArray(hintArray);
		// Debug.Log(colorForHint);
	}
}

function highlightColor(color:int){
	for(var i:int=0;i<leaves.length;i++){
		var script = (leaves[i] as GameObject).GetComponent(LeafScript);
		if(script.color==color) script.highLight();
	}
}

function highlightArray(array:Array){
	for(var i:int=0; i<array.length;i++){
		var script = (array[i] as GameObject).GetComponent(LeafScript);
		script.highLight();
	}
}

function getColorFromCombo(array:Array):int{
	return (array[0] as GameObject).GetComponent(LeafScript).color;
}

function initiateTimeStamps(){
	var startingX = (SCREEN_WIDTH-8.5*TIME_STAMP_LENGTH)/2+TIME_STAMP_LENGTH/2;
	var startingPosition = new Vector3(-SCREEN_WIDTH/2+startingX, -SCREEN_HEIGHT/2+VERTICAL_ADJUST/2, 0);
	for(var i:int=0; i<TIME_STAMP_NUM; i++){
		var object = createTimeStamp(startingPosition, new Color(1,0,0,1), TIME_STAMP_SCALE);
		timeStamps.Push(object);
		startingPosition += Vector3(TIME_STAMP_LENGTH*1.5 ,0,0);
	}

	(timeStamps[2] as GameObject).GetComponent(SpriteRenderer).color = new Color(1,0.92,0.016,1);
	(timeStamps[3] as GameObject).GetComponent(SpriteRenderer).color = new Color(1,0.92,0.016,1);
	(timeStamps[4] as GameObject).GetComponent(SpriteRenderer).color = new Color(0,1,0,1);
	(timeStamps[5] as GameObject).GetComponent(SpriteRenderer).color = new Color(0,1,0,1);
}

function createTimeStamp(vector:Vector3, color:Color, scale:float):GameObject{
	var object = Instantiate(timeStampPrefab, vector, Quaternion.identity) as GameObject;
	var script = object.GetComponent(TimeStampScript);
	object.GetComponent(SpriteRenderer).color = color;
	object.transform.localScale *= scale;
	script.ORIGINAL_SCALE = object.transform.localScale.x;
	script.SHRINK_AMOUNT = script.ORIGINAL_SCALE/2;
	return object;
}

function isOneSecPass():boolean{
	if(Time.time - accuTime >=1) return true;
}

function updateAccumTime(){
	accuTime = Time.time;
}

function subtractOneSec(){
	for(var i:int=timeStamps.length-1; i>=0; i--){
		var object:GameObject = timeStamps[i] as GameObject;
		var script = object.GetComponent(TimeStampScript);
		if(script.number!=0){
			script.number--;
			script.textObject.text = script.number + "";
			if(script.number==0){
				script.textObject.text = "";
				script.hide();
			}
			break;
		} 
	}
}

function bingo(score:int){
	addScoreText.text = "+"+score;
	addScoreText.GetComponent(Animator).SetBool("score", true);
	canvas.GetComponent(Animator).SetBool("score", true);
}

function penalty(score:int){
	addScoreText.text = score+"";
	addScoreText.GetComponent(Animator).SetBool("score", true);
	canvas.GetComponent(Animator).SetBool("score", true);
}

function resetAllLeaves(){
	for(var i:int=0; i<leaves.length; i++){
		(leaves[i] as GameObject).GetComponent(LeafScript).reset();
	}
}

function isGameOver():boolean{
	return (timeStamps[0] as GameObject).GetComponent(TimeStampScript).number==0;
}

function handleGameOver(){
	updateHighestScore();
	resetAllLeaves();
	foldAllLeaves();
	disableAllColliders();
	yield WaitForSeconds(0.5);
	showPlayButton();
	showHighestScore();
	hidePauseButton();
}


function pauseGame(){
	hidePauseButton();
	showRestartButton();
	showResumeButton();
	foldAllLeaves();
	disableAllColliders();
	isPause = true;
	yield WaitForSeconds(0.5);
	showTutorial();
}

function _pauseGame(){
	pauseGame();
}

function resumeGame(){
	yield WaitForSeconds(0.2);
	openAllLeaves();
	enableAllColliders();
	isPause = false;
	showPauseButton();
	hideRestartButton();
	hideResumeButton();
	hideTutorial();
}

function _resumeGame(){
	resumeGame();
}

function updateHighestScore(){
	if(scores > PlayerPrefs.GetInt("HighestScore")){
		PlayerPrefs.SetInt("HighestScore", scores);
	}
}

function shuffleAndApplyNewColorAtLeaves(){
	do{shuffleAllLeaves();} while(isDeckLock());
	applyNewColorAtAllLeaves();
}

function startGame(){
	hidePlayButton();
	showPauseButton();
	hideTutorial();

	yield WaitForSeconds(0.2);

	shuffleAndApplyNewColorAtLeaves();
	isGameOverHandled = false;
	gameStartTime = Time.time;
	openAllLeaves();
	enableAllColliders();
	showAllTimeStamps();
	resetTime();
	resetScore();
	shrinkEnlargeFlipScoreBoard();
	hideHighestScore();
}

function restartGame(){
	//handle buttons
	hideResumeButton();
	hideRestartButton();
	showPauseButton();
	hideTutorial();

	yield WaitForSeconds(0.2);

	shuffleAndApplyNewColorAtLeaves();
	isGameOverHandled = false;
	isPause = false;
	gameStartTime = Time.time;
	openAllLeaves();
	enableAllColliders();

	resetTime();
	showAllTimeStamps();
	resetScore();
	shrinkEnlargeFlipScoreBoard();

}

function _restartGame(){
	restartGame();
}

function showHighestScore(){
	highestScoreText.text = "Highest Score: "+PlayerPrefs.GetInt("HighestScore");
}

function hideHighestScore(){
	highestScoreText.text = "";
}

function _startGame(){
	startGame();
}

function foldAllLeaves(){
	if(leavesAreOpen){
		toggleAllLeaves();
		leavesAreOpen = false;
	}
}

function openAllLeaves(){
	if(!leavesAreOpen){
		toggleAllLeaves();
		leavesAreOpen = true;
	}
}

function enableAllColliders(){
	if(!collidersEnable){
		toggleAllCenterColliders();
		collidersEnable = true;
	}
}

function disableAllColliders(){
	if(collidersEnable){
		toggleAllCenterColliders();
		collidersEnable = false;
	}
}



function toggleCollider(centerObject:GameObject){
	var bc = centerObject.GetComponent(BoxCollider);
	bc.enabled = !bc.enabled;
}

function toggleAllCenterColliders(){
	for(var i:int=0; i<centers.length; i++){
		toggleCollider(centers[i] as GameObject);
	}
}

function toggleAllLeaves(){
	for(var i:int=0; i<leaves.length; i++){
		(leaves[i] as GameObject).GetComponent(LeafScript).toggleLeaf();
	}
}

function showAllTimeStamps(){
	for(var i:int=0; i<timeStamps.length; i++){
		(timeStamps[i] as GameObject).GetComponent(TimeStampScript).show();
	}
}

function hideAllTimeStamps(){
	for(var i:int=0; i<timeStamps.length; i++){
		(timeStamps[i] as GameObject).GetComponent(TimeStampScript).hide();
	}
}

function resetTime(){
	setTimeForTimeStamps();
	gameStartTime = Time.time;
	accuTime = Time.time;
}

function setTimeForTimeStamps(){
	for(var i:int=0; i<timeStamps.length; i++){
		var object = timeStamps[i] as GameObject;
		var script = object.GetComponent(TimeStampScript);
		script.number = STAMP_INITTIME;
		script.textObject.text = script.number+"";
	}
}

function resetScore(){
	for(var i:int=0; i<scoreBoard.length; i++){
		var object = scoreBoard[i] as GameObject;
		var script = object.GetComponent(ScoreCircleScript);
		scores = 0;
		// script.textObject.text = "0";
	}
}

function showHighestScoreOnScoreBoard(){
	scores = PlayerPrefs.GetInt("HighestScore");
	// Debug.Log(PlayerPrefs.GetInt("HighestScore"));
	for(var i:int=0; i<scoreBoard.length; i++){
		var object = scoreBoard[i] as GameObject;
		var script = object.GetComponent(ScoreCircleScript);
		script.updateTextWithValue(scores);
	}
}

function hidePauseButton(){
	hideButton(pauseButton);
	disableButton(pauseButton);
	// disableButton(pauseButtonAnim);
}

function showPauseButton(){
	showButton(pauseButton);
	enableButton(pauseButton);
	// enableButton(pauseButtonAnim);
}

function showRestartButton(){
	showButton(restartButton);
	enableButton(restartButton);
}

function hideRestartButton(){
	hideButton(restartButton);
	disableButton(restartButton);
}

function showResumeButton(){
	showButton(resumeButton);
	enableButton(resumeButton);
}

function hideResumeButton(){
	hideButton(resumeButton);
	disableButton(resumeButton);
}

function hidePlayButton(){
	hideButton(startButton);
	disableButton(startButton);
	// disableButton(startButtonAnim);
}

function showPlayButton(){
	showButton(startButton);
	enableButton(startButton);
	// enableButton(startButtonAnim);
}

function hideButton(button:UnityEngine.UI.Button){
	button.GetComponent(Animator).SetBool("hide", true);
}

function showButton(button:UnityEngine.UI.Button){
	button.GetComponent(Animator).SetBool("hide", false);
}

function disableButton(button:UnityEngine.UI.Button){
	// (anim.gameObject as UnityEngine.UI.Button).interactable = false;
	button.interactable = false;
}

function enableButton(button:UnityEngine.UI.Button){
	// (anim.gameObject as UnityEngine.UI.Button).interactable = true;
	button.interactable = true;
}


function setLowerButtonPosition(button:UnityEngine.UI.Button, xPosition:float){
	var yAdjust:float = VERTICAL_ADJUST+LEAF_WIDTH/2 + 2*CENTER_HALF_LENGTH;
	var yAdjustUI:float = yAdjust * UIScaleFactorY;
	var xPositionUI:float = xPosition * UIScaleFactorX;
	// Debug.Log(UIScaleFactorY);
	button.transform.position = new Vector3(button.transform.position.x+xPositionUI, yAdjustUI, button.transform.position.z);
}

function setTutorialPosition(){
	var yAdjust:float = VERTICAL_ADJUST + 4*CENTER_HALF_LENGTH + LEAF_WIDTH/2;
	var yAdjustUI:float = yAdjust * UIScaleFactorY;
	// Debug.Log(yAdjustUI);
	tutorial.transform.position = new Vector3(tutorial.transform.position.x, yAdjustUI, tutorial.transform.position.z);
}	

function setHighestScorePosition(){
	var yAdjust:float = VERTICAL_ADJUST + 3*2*CENTER_HALF_LENGTH + LEAF_WIDTH/2;
	var yAdjustUI:float = yAdjust * UIScaleFactorY;
	// Debug.Log(yAdjustUI);
	highestScoreText.transform.position = new Vector3(highestScoreText.transform.position.x, yAdjustUI, highestScoreText.transform.position.z);
}

function setTutorialScale(){
	var newWidth = 4*2*CENTER_HALF_LENGTH*UIScaleFactorX;
	var newHeight = 3*2*CENTER_HALF_LENGTH*UIScaleFactorY;

	// Debug.Log(tutorial.GetComponent(RectTransform).rect);
	var RectTransform = tutorial.GetComponent(RectTransform);
	var rect = RectTransform.rect;

	RectTransform.sizeDelta = new Vector2(newWidth, newHeight);
}

function hideTutorial(){
	tutorial.enabled = false;
}

function showTutorial(){
	tutorial.enabled = true;
}

function scaleStartButton(){
	var rect = startButton.GetComponent(RectTransform).rect;
	// var originalWidth = rect.width;
	// var originalHeight = rect.height;

	var newHeight = (2/3.0)*2*CENTER_HALF_LENGTH*UIScaleFactorY;
	var newWidth = 2*2*CENTER_HALF_LENGTH*UIScaleFactorX;

	startButton.GetComponent(RectTransform).sizeDelta = new Vector2(newWidth, newHeight);
}

function scaleHighestScore(){
	var rect = highestScoreText.GetComponent(RectTransform).rect;
	// var originalWidth = rect.width;
	// var originalHeight = rect.height;

	var newHeight = (2/3.0)*2*CENTER_HALF_LENGTH*UIScaleFactorY;
	var newWidth = 3*2*CENTER_HALF_LENGTH*UIScaleFactorX;

	highestScoreText.GetComponent(RectTransform).sizeDelta = new Vector2(newWidth, newHeight);
}

function scaleButton(button:UnityEngine.UI.Button, scale:float){
	var rect = button.GetComponent(RectTransform).rect;
	// var originalWidth = rect.width;
	// var originalHeight = rect.height;

	var newHeight = scale*CENTER_HALF_LENGTH*UIScaleFactorY;
	var newWidth = scale*CENTER_HALF_LENGTH*UIScaleFactorX;

	button.GetComponent(RectTransform).sizeDelta = new Vector2(newWidth, newHeight);
}

function scaleAddedScoreText(){
	var newHeight = 1.5*CENTER_HALF_LENGTH*UIScaleFactorY;
	var newWidth = 3*CENTER_HALF_LENGTH*UIScaleFactorX;
	var rect = addScoreText.GetComponent(RectTransform).rect;

	var originalWidth = rect.width;
	var originalHeight = rect.height;

	var widthScale = newWidth / originalWidth;
	var heightScale = newHeight / originalHeight;

	// Debug.Log(widthScale);
	// Debug.Log(heightScale);

	Debug.Log((centers[0] as GameObject).GetComponent(Renderer).bounds.size);

	// addScoreText.GetComponent(RectTransform).sizeDelta = new Vector2(newWidth, newHeight);
	addScoreText.GetComponent(RectTransform).localScale = new Vector3(addScoreText.GetComponent(RectTransform).localScale.x*widthScale, addScoreText.GetComponent(RectTransform).localScale.y*heightScale, addScoreText.GetComponent(RectTransform).localScale.z);
}









