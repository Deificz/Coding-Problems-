#include<stdio.h>
#include<windows.h>
#define MAX 100
int push(char stack[MAX][100], int *top, char data[100]);

int main()
{
int i;
int top;
int ans;
int action;
char stack[MAX][100], x[100];

	top == -1;
	printf("\nOption: ");
	printf("\n Press 1 - Push");
	printf("\n Press 2 - Display");
	printf("\n Press 3 - Exit");
	
	do
	{
	printf("\n\n Enter choice: ");
	scanf("%d", &ans);
	
		switch (ans)
		{
			case 1: 
				printf("\nEnter character to be pushed: ");
				scanf(" %c", &x);
				action = push(stack,&top,x);
			
                   	if(action != -1){
						printf("'%s' is pushed in the Stack.\n\n",x);
                        for(i=top ;i>=0;--i){
							if (x[i] == 'A' || x[i] == 'a' || x[i] == 'E' || x[i] == 'e' || x[i] == 'I' || x[i] == 'i' || x[i] == 'O' || x[i] == 'o' || x[i] == 'U' || x[i] == 'u' )
							{
								printf("\nStack is close");
								if(top>=0)
    							{
        							printf("\nElements in the Stack: \n");
        							for(i=top; i>=0; i--)
        							{
										printf("\n %s",stack[i]);
										exit(0);
    								}
								}
							}	
  						}
  					}
  					else{
						printf("\n Stack is full\n");
					}
  				
  				
					break;		
		
			case 2:
						if (top >= 0)
    						{
        					printf("\n Elements in the Stack: \n");
        					for(i=top; i>=0; i--)
        						{
								printf("\n %s",stack[i]);
								exit(0);
    							}
							}
						 else
   							{
        					printf("\n The stack is empty!");
    						}				
							break;
					
			case 3: 
					printf("\n Exit");
					exit(0);
								
			default:
					printf("\nError: Press 1, 2 or 3 only.");
						
		}
	}while (ans = 1);
	
return 0;
}

int push(char stack[MAX][100], int *top, char data[100])
{
      if(*top == MAX -1){
            return(-1);
       }
      else
      {
            *top = *top + 1;
            strcpy(stack[*top],data);
            return(1);
      }
}




