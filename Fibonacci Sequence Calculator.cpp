#include <stdio.h>


int main ()
{
	int i;
	int j=2;
	int k = 60;
	int row=0;
	int col=0;
	double arr[119] = {0,1};
	double fib[60][2];
    double firstnum = 0;
    double secondnum = 1;
    double nextval;
	
	
	printf("Fibonacci Series\n\n");
	
	for (i = 0; i<119; ++i)
	{
		nextval = firstnum + secondnum;
		arr[j] = nextval;
		firstnum = secondnum;
		secondnum = nextval;
		j++;
	}
	
	for(i = 0; i<60; ++i){
		fib[i][0] = arr[i] ;
	}
	for(i = 0; i<60; ++i){
		fib[i][1] = arr[k];
		++k;
	}

	for(row = 0; row<60; ++row){
		for(col=0; col<2; ++col)
			printf("\t%.0lf \t\t\t", fib[row][col]);
			printf("\n");
		}
	

	
	return 0;
}
