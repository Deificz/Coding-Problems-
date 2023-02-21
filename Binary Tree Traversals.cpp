#include <stdio.h>
#include <stdlib.h>


typedef struct treeNode
{ 
  char data;
  struct treeNode* left;
  struct treeNode* right;
  
} treeNode;

treeNode *newNode(char data)
{
	treeNode* child;
	child = (treeNode*)malloc(sizeof(treeNode));

	child->left = NULL;
	child->right = NULL;
	child->data = data;
	
	return child;
}

void displayTree(treeNode *rootNode);
void preOrder(treeNode *rootNode);
void inOrder(treeNode *rootNode);
void postOrder(treeNode *rootNode);

int main()
{
	treeNode *A = newNode('A');
	treeNode *B = newNode('B');
	treeNode *C = newNode('C');
	treeNode *D = newNode('D');
	treeNode *E = newNode('E');
	treeNode *F = newNode('F');
	treeNode *G = newNode('G');
	treeNode *H = newNode('H');
	treeNode *I = newNode('I');
	treeNode *J = newNode('J');
	
	treeNode *rootNode = A;
	
	rootNode->left = B;
	rootNode->right = E;
	
	rootNode->left->left = C;
	rootNode->left->right = NULL;
	
	rootNode->right->left = F;
	rootNode->right->right = H;
	
	rootNode->left->left->left = NULL;
	rootNode->left->left->right = D;
	
	rootNode->right->left->left = NULL;
	rootNode->right->left->right = G;
	
	rootNode->right->right->left = I;
	rootNode->right->right->right = J;
	
	
	printf("Node\t\t L-Subtree \t\t R-Subtree\n");
	displayTree(A);
	displayTree(B);
	displayTree(C);
	displayTree(E);
	displayTree(F);
	displayTree(H);
	
	printf("\nRoot of the Tree: %c",rootNode->data);
	printf ("\nPreorder Traversal: ");
	preOrder(rootNode);
	
	printf ("\nInorder Traversal: ");
	inOrder(rootNode);
	
	printf ("\nPostorder Traversal: ");
	postOrder(rootNode);
	
	

}
void displayTree(treeNode *rootNode)
{

	printf("%c\t\t\t",rootNode->data);
	if(rootNode->left != NULL)
	printf("%c\t\t\t",rootNode->left->data);
	else
	printf("null\t\t\t");
	
	if(rootNode->right != NULL)
		printf("%c\t\t\t",rootNode->right->data);
	else
	printf("null\t\t\t");
	
	printf("\n");
}

void preOrder(treeNode *rootNode) 
{
	if (rootNode == NULL)
	return;
	
	printf ("%c ", rootNode->data);
	preOrder(rootNode->left);
	preOrder(rootNode->right);
}
void inOrder(treeNode *rootNode) 
{
	if (rootNode == NULL)
	return;
	
	inOrder(rootNode->left);
	printf (" %c", rootNode->data);
	inOrder(rootNode->right);
}

void postOrder(treeNode *rootNode) 
{
	if (rootNode == NULL)
	return;
	
	postOrder(rootNode->left);
	postOrder(rootNode->right);
	printf (" %c", rootNode->data);
}


