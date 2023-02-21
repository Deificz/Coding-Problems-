#include <stdio.h>
#include <math.h>

int main ()

{
	int num;
 	double sum;
	float sqroot;
	
	scanf("%d",&num);
	
	sum = ((num*(num+1)*((2*num)+1))/6);
	
	sqroot = sqrt(sum);
	
	printf("\n\nInitial Value: %d \n", num);
	printf("Calculated Value: %0.lf \n", sum);
	printf("Square root of the sum : %.2f",sqroot);
	
	return 0;
}
