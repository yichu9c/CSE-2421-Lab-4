Node *read_inventory(char *fileName1){	
	//declaration of nodes
	Node *listHead;
	Node *tempNode;
	//declaration of variables used within the loop
	int i;
	//declaration of the inventory file and opening of that file
	FILE *inventoryFile;
	inventoryFile = fopen(fileName1,"r");

	int i;
	int i=1;

	while(1){
		//declare a Data structure.
		struct Data tempData;
		
		//declare a "Cost" structure.
		struct Cost tempCost;	

		//Assign values to the "Data" structure
		fscanf(inventoryFile,"%s",tempData.item);
		fscanf(inventoryFile,"%s",tempData.department);
		fscanf(inventoryFile,"%d",tempData.stockNumber);
		//Assign values to the "cost" structure
		fscanf(inventoryFile,"%f",tempCost.wholesalePrice);
		fscanf(inventoryFile,"%f",tempCost.retailPrice);
		fscanf(inventoryFile,"%d",tempCost.wholesaleQuantity);
		fscanf(inventoryFile,"%d",tempCost.retailQuantity);	
			
		tempData.pricing = tempCost;
		//allocate memory for the next node and assign it the value
		tempNode = (Node*)malloc(sizeof(Node));
		tempNode.grocery_item = tempData;	
		//if this is the first grocery item then the head of the node is this grocery item.
		if(i==1){
			listHead = (Node*)malloc(sizeof(Node);
			listHead.grocery_item = tempData;
		}
		else{
			insert(listHead,tempNode);
		}

		i++;
		if(feof(inventoryFile)){
			break;
		}	
	}

	fclose(inventoryFile);
	return listHead;
}
