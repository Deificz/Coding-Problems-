#include <stdio.h>

int conversion(int i);

int main()
{
	int in;
	int a;
	printf("Input In: ");
	scanf("%d",&in);
	a= conversion(in);
	printf("%d",a);
}

int conversion(int i)
{
	int answer;
	answer = i*2.54;
	return (answer);
}
