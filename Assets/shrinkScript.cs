using UnityEngine;
using System.Collections;

public class shrinkScript : StateMachineBehaviour {
	public Sprite newSprite;
	 // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
	//override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}

	// OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
//	override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
//		(animator.gameObject.GetComponent (typeof(SpriteRenderer)) as SpriteRenderer).sprite = newSprite;
//		(animator.gameObject.GetComponent (typeof(SpriteRenderer)) as SpriteRenderer).color = new Color(28.0f/255, 150.0f/255, 210.0f/255);
//	}

	// OnStateExit is called when a transition ends and the state machine finishes evaluating this state
	override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
		(animator.gameObject.GetComponent (typeof(SpriteRenderer)) as SpriteRenderer).sprite = newSprite;
		(animator.gameObject.GetComponent (typeof(SpriteRenderer)) as SpriteRenderer).color = new Color(28.0f/255, 150.0f/255, 210.0f/255);
		(animator.gameObject.GetComponent (typeof(SpriteRenderer)) as SpriteRenderer).sortingOrder = 0;
	}

	// OnStateMove is called right after Animator.OnAnimatorMove(). Code that processes and affects root motion should be implemented here
	//override public void OnStateMove(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}

	// OnStateIK is called right after Animator.OnAnimatorIK(). Code that sets up animation IK (inverse kinematics) should be implemented here.
	//override public void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}
}
