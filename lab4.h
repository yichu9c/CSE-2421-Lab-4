/*BY SUBMITTING THIS FILE TO CAMRNE, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
 * THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH 
 * RESPECT TO THIS ASSIGNMENT.
 *
 * Name: Yihone Chu
 *
 * */


struct Cost{
	float whilesalePrice;
	float retailPrice;
	int whilesaleQuantity;
	int retailQuantity;
}

struct Data{
	char item[50];
	char department[30];
	int stockNUmber;
	struct Cost pricing;
}

typedef struct Node{
	struct Data grocery_item;
	struct Node *next;
}Node;


void option_1(FILE*,Node*);
void option_2(FILE*,Node*);
void option_3(FILE*,Node*);
int get_days(int,int,int,int,int,int);
int get_length(Node*);
void insert(Node*,Node*);
void print_menu();
Node* read_inventory(char*);




