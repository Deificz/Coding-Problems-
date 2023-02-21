#include <stdio.h>
int main ()
{
int base;
int expo;
int prod = 1;
float quot = 1;

printf("Base    : ");
scanf("%d",&base);
printf("Exponent: ");
scanf("%d",&expo);

if (expo==0)
	printf("Product : 1");

else if (expo>0)
	{if (base>0||base<0)
		{do{
				expo--;
				prod = prod*base;}
		while (expo>0);
				printf("Product : %d",prod);}}
				
else
 	{if (base>0||base<0)
		{do{
				expo++;
				quot = quot/base;}
		while (expo!=0);
				printf("Product : %f",quot);}}

				

return 0;

}
