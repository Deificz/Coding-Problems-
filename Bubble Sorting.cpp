#include <stdio.h>
#include <windows.h>

int main ()
{
	
int arr[5] = {5,4,2,1,-8};
int i;
int a;
int temp;
int w;

for (i=0; i<4; i++)
{
	for(a = 1; a < 5-i; a++)
	{
 		if(arr[i] > arr[a])
		 { temp = arr[i];
   		   arr[i] = arr [a];
   	       arr[a] = temp; 
		 }
	}
   		for(w = 0; w < 5; w++)
			printf("%d ", arr[w]);
	printf("\n");
}

}




