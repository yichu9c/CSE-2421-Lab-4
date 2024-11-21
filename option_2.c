/**BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
 * TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH REGARDS
 * TO THIS ASSIGNMENT.
 *
 *Name: Yihone Chu
 *
 *
 * */


void option_2(FILE *outFile, Node *nodeHead){
	int result;
	
	Node *tempNode;
	tempNode = nodeHead;
	
	result =0;
	while(*tempNode !=null){
		result +=( (*tempNode).grocery_item.pricing.wholesalePrice * (*tempNode).grocery_item.pricing.wholesaleQuantity);
		tempNode = (*tempNode).next;

	}
	fprintf(outFile,"Total Wholesale cost:\t$%d\n",result);
}
