#include<stdio.h>    
#include<conio.h>        
#include<string.h>       
#define MAX 100    
          
int stack[MAX];             
char post[MAX];

void pushstack(int temp);       
void evaluation(char c);              
int top=-1;                 
    
   
int main()
{
   int i;
   int l;
  
   printf("Insert postfix: ");
   gets(post);                    
   l=strlen(post);               
   for(i=0;i<l;i++)
   {
      if(post[i]>='0' && post[i]<='9')
      {
          pushstack(i);             
      	if(post[i]=='+' || post[i]=='-' || post[i]=='*' ||
     		 post[i]=='/' || post[i]=='^')       
      		{
         		evaluation(post[i]);             
      		}
   	  }                      
   printf("\nResult: %d",stack[top]);
   getch();
	}
}

void pushstack(int temp)         
{
   top++;                              
   stack[top]=(int)(post[temp]-48);    
}

void evaluation(char c)       
{
   int a;
   int b;
   int ans;        
   
   a=stack[top];      
   stack[top]='\0';    
   top--;                
   b=stack[top];        
   stack[top]='\0';      
   top--;  
                
   switch(c)     
   {
      case '+':          
          ans=b+a;
          break;
      case '-':           
          ans=b-a;
          break;
      case '*':            
          ans=b*a;
          break;
      case '/':           
          ans=b/a;
          break;
      case '^':      
          ans=b^a;
          break;
      default:
          ans=0;      
   }
   top++;             
   stack[top]=ans;    

}

