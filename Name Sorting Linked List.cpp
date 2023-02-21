//Aeron Brylle R. Lazo
//BSCS 2-1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node
{
	char name[50];
	struct Node *next;
};

typedef struct Node node_t;

void createList();
void insertNode();
void unsortDisplay();
void sortDisplay();
void deleteNode();


node_t *node = NULL;
node_t *tail = NULL;


int main ()
{
	int ans,i;
	node_t *temp;
	node_t *temp1;
	
	createList();
	unsortDisplay();
	printf("Press 1 to Insert Morrie: ");
	scanf("%d",&ans);
	if(ans == 1)
	insertNode();
	unsortDisplay();
	
	printf("Element that will be deleted: ");
	scanf("%d",&ans);
	
	temp1=node;
	
	for(i = 0; i<ans; i++)
		temp1 = node->next;
	
		printf("%d",i);
		temp = temp1;
		temp->next = temp1->next;
		free(temp->next);
	
	unsortDisplay();
	/*sortDisplay();*/
	return 0;
}


void createList()
{
	
	int num;
	node_t *newNode;
	node = (node_t*)malloc(sizeof(node_t));
	
	printf("Enter how many names : ");
	scanf("%d",&num);
	
	printf("Enter a name: ");
	scanf("%s",&node->name);
	node->next = NULL;
	tail = node;
	
	for(int i = 0; i<num-1; i++)
	{
	
		newNode = (node_t*)malloc(sizeof(node_t));
		
		printf("Enter a name: ");
		scanf("%s",&newNode->name);
		
		newNode->next = NULL;
		tail->next = newNode;
		tail = newNode;
		
	}
	
}

void insertNode()
{
	node_t *temp;
	temp = (node_t*)malloc(sizeof(node_t));
	printf("Enter a name: ");
	scanf("%s",temp->name);
	
	temp->next = NULL;
	tail->next = temp;
	tail = temp;
}

void unsortDisplay()
{
	node_t *temp;
	int i = 1 ;
	
	temp = node;
	
	if(node == NULL)
	printf("Empty Stack");
	
	else
	{
		printf("\n\nIndex           Name               Address \n");
		while (temp != tail)
		{
			printf("%d       :       %s           :    %p \n", i, temp->name, temp->next);
			temp = temp->next;
			i++;
		};
		printf("%d       :       %s           :    %p \n", i, tail->name, tail->next);
	}
	
}



/*
void sortDisplay()
{
	char t[25];
	node_t *temp;
	node_t *temp1;
	
	temp = node;
	temp1 = temp->next;
	
	int i = 1;
	
	if (node == NULL)
	printf("Empty Stack");
	
	else
	{
		while (temp1 != NULL)
		{
			 if(strcmp(temp->name,temp1->name)>0){
            strcpy(t,temp1->name);
            strcpy(temp1->name,temp->name);
            strcpy(temp->name,t);
			}
			temp=temp->next;
		}
		
		printf("\n\nIndex           Name               Address \n");
			do 
		{
			printf("%d       :       %s           :    %p \n", i, temp->name, temp->next);
			temp = temp->next;
			i++;
		}while (temp != node);
	}
}*/
