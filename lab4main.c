/*BY SUBMITTING THIS ASSIGNMENT TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO
 * THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH
 * REGARDS TO THIS ASSIGNMENT.
 *
 * Name: YIHONE CHU
 * */

#include <stdio.h>;
#include <stdlib.h>;
#include <lab4.h>;
int main(int argc, char* argv){
	if(argc !=4){
		usage:month/day/year input_file output_file;
		return 0;
	}

	char response;
	int listLength;
	int loop;
	
	Node *nodeHead;
	
	//Declaration of FILE variables
	FILE *outFile,*inFile;
	//Declaration of variables used to find the difference in days
	int day,month,year,fileDay,fileYear,dayDif;

	//Getting the date from the command line.
	sscanf(*(argv+1),"%d/%d/%d",&month, &day,&year);

	//Getting the date from the file.	
	inFile = fopen(*(argv+2),"r");
	if(inFile == null){
		printf("Can not open file");
		return 0;
	}
	
	fscanf(inFile,"%d%d",&fileDay,&fileYear);
	fclose(inFile);
	
	dayDif = get_days(month,day,year,fileDay,fileYear);
	printf("There are %d days difference between the date entered and the date in the file. Do you wish to continue: \n");	
	scanf("%c",&response);

	//exit program is response is not yes.
	if(strcmp(response,'y'!=0)){
		return 0;
	}
	
	//open the file and 
	outFile = fopen(*(argv+3),"w");
	fprintf(outFile,"Reading inventory from file\"%s\"\n",**(argv+3));	
	//Read in the inventory
	nodeHead = read_inventory(*(argv+1));	

	//get the length of the linked list
	listLength = get_length();
	fprintf(outFile,"A total of %d grocery items were read into iventory from the file\"%s\"\n",listLength,*(argv+2));
	
	do{
		loop = print_menu();
		
			
	}while(loop !=12);	
















	
	return 0;
}





