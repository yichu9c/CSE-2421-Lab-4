void option_3(FILE *outFile, Node *nodeHead){
	int result;
	
	Node *tempNode;
	tempNode = nodeHead;
	result =0;

	while((*tempNode) != NULL){
		result += ( ((*tempNode).grocery_item.pricing.wholesalePrice) * ((*tempNode).grocery_item.pricing.wholesaleQuantity - (*tempNode).grocery_item.pricing.retailQuantity));
		tempNode = (*tempNode).next;
	}

	fscanf(outFile,"Total Wholesale Investment:\t%d\n",result);
}
