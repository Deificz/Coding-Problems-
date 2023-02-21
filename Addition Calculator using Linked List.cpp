//Aeron Brylle R. Lazo
//BSCS 2-1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node{
	int data;
	struct node *next;
};

typedef struct node node_t;

node_t *createNode(node_t *head,int val);
void display(node_t *head);
node_t *reverse(node_t *head);
void display(node_t *head);
node_t *addTwoNumbers(node_t *head1,node_t *head2,node_t *head3);

int main()
{
	node_t *head1 = NULL;
	node_t *head2 = NULL;
	node_t *head3 = NULL;

	int ans,dig;

	printf("First number\n");
	do{
	printf("Enter digit:");
	scanf("%d",&dig);
	head1 = createNode(head1,dig);
	printf("Press 1 to add more digit Press 0 to cancel :  ");
	scanf("%d",&ans);
	}while (ans==1);
	
	printf("\nFirst number: ");
	display(head1);
	
	printf("\nSecond number\n");
	do{
	printf("Enter digit:");
	scanf("%d",&dig);
	head2 = createNode(head2,dig);
	printf("Press 1 to add more digit Press 0 to cancel :  ");
	scanf("%d",&ans);
	}while (ans==1);

	printf("\nSecond number: ");
	display(head2);

	head1 = reverse(head1);
	head2 = reverse(head2);	
	
	printf("\n");
	display(head1);
	printf("+\n");
	display(head2);
	
	head3 = addTwoNumbers(head1,head2,head3);
	printf("\nAnswer:\n");
	display(head3);

}

node_t *createNode(node_t *head,int val)
{
	node_t *temp;
	temp = (node_t*)malloc(sizeof(node_t));
	temp->data = val;
	temp->next = NULL;

	if(!head)
		return temp;
	else{
		node_t *temp2;
		temp2 = head;
		while(temp2->next != NULL)
			temp2 = temp2->next;

		temp2->next = temp;
	}
	return head;
}


void display(node_t *head)
{
	while(head){
		printf("%d",head->data);
		head = head->next;
	}
	printf("\n");
}

node_t *reverse(node_t *head)
{
	node_t *prev = NULL;
	node_t *temp=head;
	node_t *after;
	
	prev = NULL;
	temp= head;
	
	while(temp){
			after = temp->next;
			temp->next = prev;
			prev = temp;
			temp = after;
		}	
	return prev;
}

node_t *addTwoNumbers(node_t *head1,node_t *head2,node_t *head3)
{
	int sum=0;

	while(head1 || head2){
		sum += ((head1?head1->data:0)+(head2?head2->data:0));

		if(head1)
			head1 = head1->next;
		if(head2)
			head2 = head2->next;
		if(sum>9){
			head3 =  createNode(head3,sum%10);	
			sum = sum/10;
		}
		else{
			head3 =  createNode(head3,sum);	
			sum = 0;
		}
	}
	
	if(sum>0)
		head3 =  createNode(head3,sum);	

	head3 = reverse(head3);
	return head3;
}
