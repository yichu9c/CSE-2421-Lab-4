/**BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENUTRES OF THE
 * OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH REGARDS TO THIS ASSIGNMENT.
 *
 *Name: Yihone Chu
 *
 *
 * */
void option_1(FILE *outFile, Node *nodeHead){
	int result;
	result =0;

	Node *tempNode;
	tempNode = nodeHead;

	while(*tempNode !=null){
		
		result +=( (*tempNode).grocery_item.pricing.retailPrice * (*tempNode).grocery_item.pricing.retailQuantity);
		tempNode = (*tempNode).next;
	}
	fprintf(outFile,"Total revenue:\t$%d\n",result);
}
