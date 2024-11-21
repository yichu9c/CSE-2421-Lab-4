/**BY SUBMITTING THIS ASSIGNMENT TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
 * TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH REGARDS TO THIS
 * ASSIGNMENT.
 *Name: YIHONE CHU
 * 
 **/

void insert(Node *nodeHead,Node *element){
	//Declaration of a temp node that is needed in the loop.
	Node *tempNode;
	tempNode = nodeHead;
	
	while((*tempNode != NULL) && (*element).grocery_item.stockNumber > (*tempNode).grocery_item.stockNumber){
		tempNode = tempNode.next;

	}
	(*tempNode).next = element;
}
