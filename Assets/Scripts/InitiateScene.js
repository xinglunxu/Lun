#pragma strict

var SCREEN_HEIGHT:float;
var SCREEN_WIDTH:float;
var prefab:GameObject;
var circlePrefab:GameObject;
// var object:GameObject;
var RING_SCALE:float;
var RING_R:float;
var CIRCLE_SCALE:float;
var RING_ROWS = 5;
var RING_COLS = 4;
var MARGIN:float;
var circles : Array;
var RED = 0;
var BLUE = 2;
var YELLOW = 1;
var GREEN = 3;
var TOTAL_COLOR = 4;
var colorDict:Hashtable;


function Start () {
	circles = new Array();
	prefab = Resources.Load("Objects/RingPrefab");
	circlePrefab = Resources.Load("Objects/CirclePrefab");

	SCREEN_HEIGHT = Camera.main.orthographicSize * 2;
	SCREEN_WIDTH = SCREEN_HEIGHT * Screen.width / Screen.height;
	MARGIN = 0.03*SCREEN_WIDTH;

	RING_SCALE = (SCREEN_WIDTH-MARGIN*2) / (4*prefab.GetComponent(Renderer).bounds.size.x);
	RING_R = RING_SCALE * prefab.GetComponent(Renderer).bounds.size.x/2;
	CIRCLE_SCALE = SCREEN_WIDTH / (18*circlePrefab.GetComponent(Renderer).bounds.size.x);

	var red = new Color(1,0,0,1);
	var blue = new Color(0,0,1,1);
	var yellow = new Color(1,0.92,0.016,1);
	var green = new Color(0,1,0,1);

	colorDict = new Hashtable();
	colorDict.Add(RED, red);
	colorDict.Add(BLUE, blue);
	colorDict.Add(YELLOW, yellow);
	colorDict.Add(GREEN, green);
	// colorDict = {RED: red, BLUE: blue, YELLOW: yellow};

	initiateOuterRings();
	initiateInnerRings();
	initiateCircles();

	// Debug.Log("number of row combo:  "+getComboRow().length);
	// Debug.Log("number of col combo:  "+getComboCol().length);
	 // Debug.Log("number of diag up combo:  "+getDiagUp().length);
	Debug.Log("number of diag down combo:  "+getDiagDown().length);

}

function Update () {
	// if(Input.touchCount>0)
	// 	object.transform.localPosition += Vector3(1,1,1);
	listenForTouch();


}

function initiateOuterRings(){
	var ringPosition:Vector3 = new Vector3(-SCREEN_WIDTH/2+RING_R+MARGIN,-SCREEN_HEIGHT/2+(RING_ROWS*2-1)*RING_R+MARGIN,0);
	var number = 0;
	for(var i=0; i<RING_ROWS; i++){
		var tempPosition = ringPosition;
		for(var j=0; j<RING_COLS;j++){
			var object = Instantiate(prefab, tempPosition, Quaternion.identity) as GameObject;
			object.transform.localScale = Vector3(RING_SCALE,RING_SCALE,RING_SCALE);
			var script = object.GetComponent(RingScript);
			script.number = number;
			script.isOuter = true;
			tempPosition += Vector3(2*RING_R, 0,0);
			number++;
			// Debug.Log(script.number);
		}

		ringPosition += new Vector3(0 , -RING_R*2, 0);
	}
}

function initiateInnerRings(){
	var ringPosition = new Vector3(-SCREEN_WIDTH/2+2*RING_R+MARGIN, -SCREEN_HEIGHT/2+(RING_ROWS-1)*2*RING_R+MARGIN,0);
	var number = 0;
	for(var i=0; i<RING_ROWS-1; i++){
		var tempPosition = ringPosition;
		for(var j=0; j<RING_COLS-1;j++){
			var object = Instantiate(prefab, tempPosition, Quaternion.identity) as GameObject;
			object.transform.localScale = Vector3(RING_SCALE,RING_SCALE,RING_SCALE);
			var script = object.GetComponent(RingScript);
			script.number = number;
			script.isOuter = false;
			tempPosition += Vector3(2*RING_R, 0,0);
			number++;
			// Debug.Log(script.number);
		}
		ringPosition += new Vector3(0 , -RING_R*2, 0);
	}
}

function initiateCircles(){
	var evenCirclePosition = new Vector3(-SCREEN_WIDTH/2+RING_R+MARGIN, -SCREEN_HEIGHT/2+RING_ROWS*RING_R*2+MARGIN,0);
	var oddCirclePosition = new Vector3(-SCREEN_WIDTH/2+MARGIN,-SCREEN_HEIGHT/2+RING_ROWS*RING_R*2+MARGIN-RING_R,0);
	for(var i=0; i<=2*RING_ROWS; i++){
		if(i%2==0){
			var tempPosition = evenCirclePosition;
			for(var j=0; j<RING_COLS; j++){
				var object = Instantiate(circlePrefab, tempPosition, Quaternion.identity) as GameObject;
				object.transform.localScale = Vector3(CIRCLE_SCALE,CIRCLE_SCALE,CIRCLE_SCALE);
				var colorNum:int = Random.Range(0,TOTAL_COLOR-0.0001);
				object.GetComponent(SpriteRenderer).color = colorDict[colorNum];
				object.GetComponent(CircleScript).color = colorNum;
				circles.Push(object);
				tempPosition += Vector3(2*RING_R,0,0);
			}
			evenCirclePosition += new Vector3(0, -2*RING_R, 0);
		}
		else{
			tempPosition = oddCirclePosition;
			for(j=0; j<=RING_COLS;j++){
				object = Instantiate(circlePrefab, tempPosition, Quaternion.identity) as GameObject;
				colorNum = Random.Range(0,TOTAL_COLOR-0.0001);
				object.GetComponent(SpriteRenderer).color = colorDict[colorNum];
				object.GetComponent(CircleScript).color = colorNum;
				object.transform.localScale = Vector3(CIRCLE_SCALE,CIRCLE_SCALE,CIRCLE_SCALE);
				circles.Push(object);
				tempPosition += Vector3(2*RING_R,0,0);
			}
			oddCirclePosition += new Vector3(0, -2*RING_R, 0);
		}

	}

	Debug.Log(circles.length);
}

function listenForTouch(){
	if(Input.touchCount <= 0) return;
	if(Input.GetTouch(0).phase==TouchPhase.Ended || Input.GetTouch(0).phase==TouchPhase.Canceled){
		Debug.Log("listenForTouch event called");
		var ray:Ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
		var hits:RaycastHit[];
		hits = Physics.RaycastAll(ray);
		Debug.Log(hits.Length);
		for(var i=0; i<hits.Length; i++){
			var hit:RaycastHit = hits[i];
			var object = hit.transform.gameObject;
			object.transform.localPosition += Vector3(1,0,0);
		}
	}
}

function getComboRow():Array{
	var counter = 0;
	var result:Array = new Array();
	var evenRow=0;
	while(counter<circles.length){
		var temp:Array = new Array();
		var length:int;
		if(evenRow%2==0) length = counter+RING_COLS-1;
		else length = counter+RING_COLS;
		// Debug.Log("length :"+length);
		var lastColor = -1;
		for(counter=counter; counter<=length; counter++){
			Debug.Log(lastColor);
			var currentColor = (circles[counter] as GameObject).GetComponent(CircleScript).color;
			if(lastColor == currentColor){
				temp.Push(circles[counter]);
			}
			else{
				if(temp.length>=3) result.Push(temp);
				temp = new Array();
				temp.Push(circles[counter]);
			}

			lastColor = currentColor;
		}

		// Debug.Log(counter);
		// Debug.Log("----------------------");
		if(temp.length>=3) result.Push(temp);
		lastColor = -1;
		evenRow++;
	}

	return result;
}

function getComboCol():Array{
	var result:Array = new Array();
	var evenCol = 0;
	var startingPositionEven:int = 4;
	var startingPositionOdd:int = 0;
	while(evenCol<RING_COLS*2+1){
		var temp:Array = new Array();
		var length:int;
		var startingPosition:int;
		if(evenCol%2==0){
			length = RING_ROWS-1;
			startingPosition = startingPositionEven;
			startingPositionEven++;
		} 
		else{
			length = RING_ROWS;
			startingPosition = startingPositionOdd;
			startingPositionOdd++;
		}
		var lastColor = -1;
		// Debug.Log("startingPosition: "+startingPosition);
		for(var i:int=0; i<=length; i++){
			var index = i*9+startingPosition;
			var currentColor = (circles[index] as GameObject).GetComponent(CircleScript).color;
			if(lastColor==currentColor){
				temp.Push(circles[index]);
			}
			else{
				if(temp.length>=3) result.Push(temp);
				temp = new Array();
				temp.Push(circles[index]);
			}

			lastColor = currentColor;
		}

		if(temp.length>=3) result.Push(temp);
		lastColor = -1;
		evenCol++;
	}


	return result;
}

function getDiagUp():Array{
	var result:Array = new Array();
	var i:int; var j:int; var startingPoint:int; var end:int;
	var lastColor = -1;
	var currentColor;
	var temp:Array = new Array();
	for(i=0; i<RING_ROWS; i++){
		startingPoint = RING_COLS+i*(2*RING_COLS+1);
		end = startingPoint - RING_COLS*(2*i+1);

		//hardcoded part!!!
		if(i==4) end = 8;
		// Debug.Log("start point: "+startingPoint);
		// Debug.Log("end point: "+end);
		for(j=startingPoint; j>=end; j-=RING_COLS){
			currentColor = (circles[j] as GameObject).GetComponent(CircleScript).color;
			if(lastColor==currentColor){
				temp.Push(circles[j]);
			}
			else{
				if(temp.length>=3) {
					// Debug.Log("Push position: "+j);
					result.Push(temp);}
				temp = new Array();
				temp.Push(circles[j]);
			}
			lastColor = currentColor;
		}
		if(temp.length>=3) {
			// Debug.Log("Outer Push position: "+j); 
			result.Push(temp);
			temp = new Array();
		}
		lastColor = -1;
	}
	temp = new Array();

	for(i=0; i<RING_COLS; i++){
		startingPoint = RING_ROWS*(2*RING_COLS+1)+i;
		//hardcode end point here!
		end = 17+i*9;
		// Debug.Log("start point: "+startingPoint);
		// Debug.Log("end point: "+end);
		for(j=startingPoint; j>=end; j-=RING_COLS){
			currentColor = (circles[j] as GameObject).GetComponent(CircleScript).color;
			if(lastColor==currentColor){
				temp.Push(circles[j]);
			}
			else{
				if(temp.length>=3) result.Push(temp);
				temp = new Array();
				temp.Push(circles[j]);
			}
			lastColor = currentColor;
		}
		if(temp.length>=3) {
			result.Push(temp);
			temp = new Array();
		}
		lastColor = -1;
	}	



	return result;
}

function getDiagDown():Array{
	var result:Array = new Array();
	var i:int; var j:int; var startingPoint:int; var end:int;
	var lastColor = -1;
	var currentColor;
	var temp:Array = new Array();
	for(i=0; i<RING_ROWS; i++){
		startingPoint = RING_COLS+(RING_COLS*2+1)*(RING_ROWS-i-1);
		end = startingPoint + (RING_COLS+1)*(i*2+1);
		//hardcode the endpoint 
		if(i==4) end = 44;
		// Debug.Log("start point: "+startingPoint);
		// Debug.Log("end point: "+end);
		for(j=startingPoint; j<=end; j+=(RING_COLS+1)){
			currentColor = (circles[j] as GameObject).GetComponent(CircleScript).color;
			if(lastColor==currentColor){
				temp.Push(circles[j]);
			}
			else{
				if(temp.length>=3) {
					// Debug.Log("Push position: "+j);
					result.Push(temp);}
				temp = new Array();
				temp.Push(circles[j]);
			}
			lastColor = currentColor;
		}
		if(temp.length>=3) {
			result.Push(temp);
			temp = new Array();
		}
		lastColor = -1;
	}
	temp = new Array();

	for(i=0; i<RING_COLS;i++){
		startingPoint = i;
		end = startingPoint + (2*(RING_COLS-i)-1)*(RING_COLS+1);
		for(j=startingPoint; j<=end; j+=(RING_COLS+1)){
			currentColor = (circles[j] as GameObject).GetComponent(CircleScript).color;
			if(lastColor==currentColor){
				temp.Push(circles[j]);
			}
			else{
				if(temp.length>=3) result.Push(temp);
				temp = new Array();
				temp.Push(circles[j]);
			}
			lastColor = currentColor;
		}
		if(temp.length>=3) {
			result.Push(temp);
			temp = new Array();
		}
		lastColor = -1;
	}


	return result;
}



