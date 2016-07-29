using UnityEngine;
using System.Collections;


public class enLargeBehavior : StateMachineBehaviour {
	public Sprite newSprite;

//	  OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
	override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
//		Debug.Log ("OnStateEnter function called");
//		Texture2D texture = Resources.Load("Objects/Circle") as Texture2D;
//		Sprite newSprite = Sprite.Create(texture, new Rect(0,0,texture.width, texture.height), new Vector2(0.5f, 0.5f));
//		Debug.Log (newSprite);
		GameObject go = animator.gameObject;
//		CenterScript cs = animator.gameObject.GetComponent (typeof(CenterScript)) as CenterScript;

		(go.GetComponent(typeof(SpriteRenderer)) as SpriteRenderer).sprite = newSprite;
		(go.GetComponent (typeof(SpriteRenderer)) as SpriteRenderer).color = new Color (0.0f, 0.0f, 0.0f);
		(go.GetComponent (typeof(SpriteRenderer)) as SpriteRenderer).sortingOrder = 1;
	}

	// OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
	//override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}

	// OnStateExit is called when a transition ends and the state machine finishes evaluating this state
	//override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}

	// OnStateMove is called right after Animator.OnAnimatorMove(). Code that processes and affects root motion should be implemented here
	//override public void OnStateMove(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}

	// OnStateIK is called right after Animator.OnAnimatorIK(). Code that sets up animation IK (inverse kinematics) should be implemented here.
	//override public void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}
}
