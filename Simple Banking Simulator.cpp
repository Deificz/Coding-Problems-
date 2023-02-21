#include <stdio.h>
#include <windows.h>
int main()
{
float bal=0;
float wd;
int dp;
int option;
char ans='Y'||'y';

do{
printf("\n\n\n\t\t\t\t\t    PUP Bank\n\n");

	printf("\t\t\t\t\tBanking Options: \n");

	printf("\t\t\t\t\t(1) Deposit\n");

	printf("\t\t\t\t\t(2) Withdraw\n");

	printf("\t\t\t\t\t(3) Inquiry\n");

	printf("\t\t\t\t\tOption: ");
	scanf("%d", &option);

if(option != 1 && option != 2 && option != 3 )
    {
    	printf("Invalid Input!\n\n\n\n");
	}
    
	switch (option)
	{
		case 1:
			
			printf("\n\t\t\tEnter Amount: ");
			scanf("%d",&dp);
			bal=bal+dp;
			break;
		case 2:
			
			printf("\n\t\t\tEnter Amount: ");
			scanf("%.2f",&wd);
			if(wd>bal)
			printf("\n\t\t\tInsufficient Funds !");
			else
			bal=bal-wd;
			break;
		case 3:
			printf("\n\t\t\tBalance:%.2f",bal);
			break;
	}
	
	printf("\n\n\t\t\tDo you want to continue? ");
	scanf(" %c",&ans);
	
	system("cls");
}while(ans=='y'||ans=='Y');


}
