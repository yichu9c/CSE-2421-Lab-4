/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
 * TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT
 * TO THIS ASSIGNMENT
 *
 *Name: Yihone Chu
 *
 * */

int print_menu(){
	int response;
	
	///prints out the menu
	printf("Please enter a number between 1 and 12: \n");
	scanf("%d",&response);
	
	printf("1)\tPrint Total Revenue\n");
	printf("2)\tPrint Total Wholesale Cost\n");
	printf("3)\tPrint Current Grocery Item Investment\n");
	printf("4)\tPrint Current Profit\n");
	printf("5)\tPrint Total Number of Grocery Items Sold\n");
	printf("6)\tPrint Average Profit per Grocery Item\n");
	printf("7)\tPrint Grocery Items In Stock\n");
	printf("8)\tPrint out of Stock Grocery Items\n");
	printf("9)\tPrint Grocery Items for a department\n");
	printf("10)\tAdd Grocery Item to Inventory\n");
	printf("11)\tDelete Grocery Item from Inventory\n");
	printf("12)Exit Program\n\n");

	printf("Option:\t%d",response);	
}

