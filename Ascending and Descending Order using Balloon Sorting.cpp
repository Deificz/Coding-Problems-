#include <stdio.h>
#include <windows.h>

void ascending ();
void descending ();

int main()
{
ascending ();
descending ();
}

void ascending ()
{
	
int arr[5] = {5,4,2,1,-8};
int i;
int a;
int temp;

//First Pass
for (i=1;i<5;++i)
{
 if(arr[0] > arr[i])
 { temp = arr[i];
   arr[i] = arr [0];
   arr[0] = temp;
 }
}
printf("\t\t\n\n\n\n\t\t\tFirst Pass         : ");
for(i=0;i<5;++i)
printf("%d",arr[i]);
printf("\n");

// Second Pass
for (i=2;i<5;++i)
{
 if(arr[1] > arr[i])
 { temp = arr[i];
   arr[i] = arr [1];
   arr[1] = temp;
 }
}
printf("\t\t\tSecond Pass        : ");
for(i=0;i<5;++i)
printf("%d",arr[i]);
printf("\n");

 //Third Pass
 for (i=3;i<5;++i)
{
 if(arr[2] > arr[i])
 { temp = arr[i];
   arr[i] = arr [2];
   arr[2] = temp;
 }
}
printf("\t\t\tThird Pass         : ");
for(i=0;i<5;++i)
printf("%d",arr[i]);
printf("\n");

//Fourth Pass
for (i=4;i<5;++i)
{
 if(arr[3] > arr[i])
 { temp = arr[i];
   arr[i] = arr [3];
   arr[3] = temp;
 }
}
printf("\t\t\tFourth Pass        : ");
for(i=0;i<5;++i)
printf("%d",arr[i]);
printf("\n");

//Final Sorted Values
printf("\t\t\tFinal Sorted Values: ");
for(i=0;i<5;++i)
printf("%d",arr[i]);
printf("\n");
}

void descending ()
{
	
int arr[5] = {5,4,2,1,-8};
int i;
int a;
int temp;

//First Pass
for (i=1;i<5;++i)
{
 if(arr[0] < arr[i])
 { temp = arr[i];
   arr[i] = arr [0];
   arr[0] = temp;
 }
}
printf("\t\t\n\n\n\n\t\t\tFirst Pass         : ");
for(i=0;i<5;++i)
printf("%d",arr[i]);
printf("\n");

// Second Pass
for (i=2;i<5;++i)
{
 if(arr[1] < arr[i])
 { temp = arr[i];
   arr[i] = arr [1];
   arr[1] = temp;
 }
}
printf("\t\t\tSecond Pass        : ");
for(i=0;i<5;++i)
printf("%d",arr[i]);
printf("\n");

 //Third Pass
 for (i=3;i<5;++i)
{
 if(arr[2] < arr[i])
 { temp = arr[i];
   arr[i] = arr [2];
   arr[2] = temp;
 }
}
printf("\t\t\tThird Pass         : ");
for(i=0;i<5;++i)
printf("%d",arr[i]);
printf("\n");

//Fourth Pass
for (i=4;i<5;++i)
{
 if(arr[3] < arr[i])
 { temp = arr[i];
   arr[i] = arr [3];
   arr[3] = temp;
 }
}
printf("\t\t\tFourth Pass        : ");
for(i=0;i<5;++i)
printf("%d",arr[i]);
printf("\n");

//Final Sorted Values
printf("\t\t\tFinal Sorted Values: ");
for(i=0;i<5;++i)
printf("%d",arr[i]);
printf("\n");
}
