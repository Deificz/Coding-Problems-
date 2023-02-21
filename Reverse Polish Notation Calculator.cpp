#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

char stack[100];
int top = -1;

int priority(char token);
int priority1(char token);
void push(char token);
void infixConversion ();
char pop();
char rpnString1[100];


int main()
{
	infixConversion();
	
    char *var;
	char token;
	int i;	
	int opp1;
	int opp2;
	int result;
	
    var = rpnString1;
    printf("\n Answer: \n");

    for(i = 0; *var != '\0'; i++ )
    {
        if(isalnum(*var))
            push(*var);
        else 
        {
           opp1 = pop() - '0';
		   opp2 = pop() - '0';
		   
		   if(*var == '+')
		   {
		   		push (opp2 + opp1);
		
		   }
		   else if(*var == '-')
		   {
		   		push (opp2 - opp1);
			
		   }
		   else if(*var == '*')
		   {
		   		push (opp2 * opp1);
			
		   }
		   else if(*var == '/')
		   {
		   		push (opp2 / opp1);
		   }	
        }
        var++;
    }

	printf("%d",pop());
}

void infixConversion()
{
    char rpnString[100];
    
    char *variable;
	char token;
	int i;
	
    printf("Enter the infix expression: \n");
    scanf("%s",rpnString);
    variable = rpnString;
   
    for(i = 0; *variable != '\0'; i++ )
    {
        if(isalnum(*variable))
            rpnString1[i] = *variable;
        else if(*variable == '(')
            push(*variable);
        else if(*variable == ')')
        {
            while((token = pop()) != '(')
               	rpnString1[i] = *variable;
        }
        else
        {
            while(priority(stack[top]) >= priority(*variable))
            pop();
            push(*variable);
        }
        variable++;
    }
    
    while(top != -1)
    {
        rpnString1[i] = pop();
        i++;
    }
    memset(stack, 0, sizeof stack);
}


int priority(char token)
{
    if(token == '(')
        return 0;
    if(token == '+' || token == '-')
        return 1;
    if(token == '*' || token == '/')
        return 2;
    return 0;
}

int priority1(char token)
{
    if(token == '+' || token == '-' || token == '*' || token == '/')
        return 2;
    return 0;
}

void push(char token)
{
    stack[++top] = token;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

