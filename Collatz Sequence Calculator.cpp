#include <stdio.h>


int main()

{
	int num;
	int length=0;
	
	scanf("%d",&num);
	
	printf("\nThe Initial Value is : %d\n\n",num);
	do{
	
	if(num%2 == 0)
		num = num/2;
	else
		num = (num*3) + 1;
		
	printf("%d\n",num);
	length += 1;
	
	}while (num != 1 );
	
	printf("\n The Length of the Sequence is : %d",length);
	
	return 0;
}
