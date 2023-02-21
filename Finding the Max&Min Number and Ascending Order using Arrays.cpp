#include <stdio.h>
#include <windows.h>

int maxnmin();
int ascend();
int del();

int main()
{

	int menu;
	int ans = 0 ;
	
	printf("Press: \n1. Maximum and Minimum \n2. Ascend \n3. Delete \n\n");
	scanf("%d",&menu);

	switch(menu)
	{
		case 1:
				system("cls");
				maxnmin();
				break;
		case 2: 
				system("cls");
				ascend();
				break;
		case 3:
				system("cls");
				del();
				break;

	}
	return 0;
}

int maxnmin ()
{
	int size=0;
	int i;
	int elements[size];
	int max;
	int min;


	printf("How many elements: ");
	scanf("%d",&size);
	
	for(i=0; i<size; i++){
	printf("Input element %d: ",i);
	scanf("%d",&elements[i]);
	}
	
	max = elements[0];
	
	for(i=1; i<size; i++){
		
		if(elements[i]>max)
		{
			max = elements[i];	
		}
	
	}
	
	min = elements[0];
	
	for(i=1; i<size; i++){
		
		if(elements[i]<min)
		{
			min = elements[i];	
		}
	
	}

	printf("\nMaximum : %d", max);
	printf("\nMinimum : %d", min);
	
}

int ascend()
{
	int size=0;
	int i,j;
	int temp;

	
	printf("How many elements: ");
	scanf("%d",&size);
	
	int elements[size];
	
	for(i=0; i<size; i++){
	printf("Input element %d: ",i);
	scanf("%d",&elements[i]);
	}
	
	for(i=0; i<size-1; i++){
		for(j=0; j<size-i-1; j++){
		
			if(elements[j]>elements[j+1]){
					temp = elements[j];
					elements[j] = elements[j+1];
					elements[j+1] = temp;
					}
				}
			}
	 printf("Ascending order:  ");
	for (i = 0; i < size; i++)
     printf("%d ", elements[i]);	
}

int del()
{
	int size=0;
	int i,j;
	int pos;
	int elements[size];
	int temp;

	
	printf("How many elements: ");
	scanf("%d",&size);
	
	for(i=0; i<size; i++){
	printf("Input element %d: ",i);
	scanf("%d",&elements[i]);
	}
	
	for(i=0; i<size-1; i++){
		for(j=0; j<size-i-1; j++){
		
			if(elements[j]>elements[j+1]){
					temp = elements[j];
					elements[j] = elements[j+1];
					elements[j+1] = temp;
					}
				}
			}
	for (i = 0; i < size; i++)
     printf("Element %d : %d\n", i,elements[i]);	
     
	printf("Enter the element you want to delete : ");
	scanf("%d",&pos);	
	
	for (i = pos; i < size ; i++)
        elements[i] = elements[i+1];
    
     printf("The new list is :  ");
     
	for (i = 0; i < size-1; i++)
     printf("%d ", elements[i]);
	
}
