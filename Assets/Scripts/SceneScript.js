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
var RED = 0;
var BLUE = 1;


function Start () {
	colorDict = new Hashtable();
	colorDict.Add(RED, new Color(1,0,0,1));
	colorDict.Add(BLUE, new Color(0,0,1,1));
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
	VERTICAL_ADJUST = (SCREEN_HEIGHT-ROWS*2*CENTER_HALF_LENGTH-LEAF_WIDTH)*2/5;
	// Debug.Log(centerPrefab.GetComponent(Renderer).bounds.size.y);
	// Debug.Log(centerPrefab.GetComponent(Renderer).bounds.size.x);

	initiateCenters();
	initiateLeafs();
}


function Update () {

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
			var object = Instantiate(centerPrefab, tempPosition, Quaternion.identity) as GameObject;
			object.transform.localScale = Vector3(CENTER_SCALE,CENTER_SCALE,CENTER_SCALE);
			var script = object.GetComponent(CenterScript);
			script.number = number;
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
	for(i=0; i<2*ROWS+1; i++){
		if(i%2==0){
			tempPosition = startingEvenPosition;
			for(j=0; j<COLS; j++){
				var object = Instantiate(leafPrefab, tempPosition, Quaternion.identity) as GameObject;
				object.transform.localScale = Vector3(LEAF_SCALE, LEAF_SCALE, LEAF_SCALE);
				object.transform.Rotate(0,0,90);
				leaves.Push(object);
				tempPosition += Vector3(2*CENTER_HALF_LENGTH,0,0);
			}
			startingEvenPosition += Vector3(0,-2*CENTER_HALF_LENGTH,0);
		}
		else{
			tempPosition = startingOddPosition;
			for(j=0; j<COLS+1; j++){
				object = Instantiate(leafPrefab, tempPosition, Quaternion.identity) as GameObject;
				object.transform.localScale = Vector3(LEAF_SCALE, LEAF_SCALE, LEAF_SCALE);
				leaves.Push(object);
				tempPosition += Vector3(2*CENTER_HALF_LENGTH,0,0);
			}
			startingOddPosition += Vector3(0,-2*CENTER_HALF_LENGTH,0);
		}

	}
	
}



