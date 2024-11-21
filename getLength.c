/**BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF
 * THE OHIO STATE UNIVERSITY"S ACADEMIC INTEGRITY POLICTY WITH REGARDS TO THIS
 * ASSIGNMENT
 *
 *Name: Yihone Chu
 **/

int get_length(Node *nodeHead){
	int count;
	Node *tempNode;
	tempNode = nodeHead;

	count =0;
	while((*tempNode) !=null){
		tempNode = (*tempNode).next;
		count ++;
	}
	return count;

}

