//Aeron Brylle R. Lazo
//BSCS 2-1

#include <stdio.h>
#include <stdlib.h>


struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node node_t;

void createNode();
void displayNode();

node_t *node = NULL;
node_t *tail = NULL;

int main()
{
	createNode();
	displayNode();
	
	return 0;
}

void createNode()
{
	int num;
	
	node_t *newnode;

	node = (node_t*)malloc(sizeof(node_t));
	
	printf("Enter how many nodes: ");
	scanf("%d",&num);
	
	printf("Enter a new node: ");
	scanf("%d",&node->data);
	node->next = NULL;
	tail = node;
	
	for(int i = 0; i<num-1; i++){
	newnode = (node_t*)malloc(sizeof(node_t));
	printf("Enter a new node: ");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	tail->next = newnode;
	tail = newnode;
	}
	
	tail->next = node; //Last node points back to the first node
}

void displayNode()
{
	int i = 1;
	node_t *temp;
	
	
	if(node == NULL)
	printf("engk");
	
	else
	{
		temp=node;
		
		do{
			printf("Element %d  :  %d\n",i,temp->data);
			temp= temp->next;
			
			i++;
		}while(temp != node);
		
	
	}
}



