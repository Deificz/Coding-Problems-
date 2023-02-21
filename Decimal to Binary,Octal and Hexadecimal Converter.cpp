#include <stdio.h>
#include <conio.h>
int main ()
{
//Declaration
int num;
int temp;
int form;
int arr[50];
int oct;
int hex;

//Inputs
printf("\n\n\n\n\n\n\n\t\t\t\t\tDecimal to Binary,Octal and Hexadecimal Converter !");
printf("\n\n\t\t\t\t\t          Value          : ");
scanf("%d",&num);
printf("\t\t\t\t\t\          Expected Format: ");
scanf("%d",&form);

//Conversion
if (form==2||form==8||form==16)
	printf("\n\t\t\t\t\t\t  %d base 10 is ",num);
//Decimal to Binary
	if (form==2)
	  do{
		if (num%2==0)
		 {printf("0");
		 num=num/2;}
	 
		else
	 	{printf("1");
	 	num=num/2;}
		} while (num>0);
		
//Decimal to Octal
	else if (form==8)
	  do{
		if (num%8==0)
		 {printf("0");
		 num=num/8;}
	 
		else
	 	{oct=num%8;
		 printf("%d",oct);
	 	num=num/8;}
		} while (num>0);
		
//Decimal to Hexadecimal
	else if (form==16)
	  do{
		if (num%16==0)
		 {printf("0");
		 num=num/16;}
	 
		else
	 	{hex=num%16;
		 printf("%d",hex);
	 	num=num/16;}
		} while (num>0);
	
//Outputs
if (form==2||form==8||form==16)
	printf(" is base %d \n\n\n\n\n",form);
else 	
	{printf("\n\n\t\t\t\t\t\t      Cannot be converted !"); 
	printf("\n\t\t\t\t\t\t        Please Try Again\n\t\t\t\t\t\t\n ");}
   
getch ();
return 0;
}




