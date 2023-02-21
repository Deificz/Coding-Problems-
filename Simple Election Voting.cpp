#include <stdio.h>
#include <stdlib.h>

struct election
{
	int A[5];
	int B[5];
	int C[5];
	int D[5];
};


int main()
{
struct election e;
int i;
	printf(" Candidate A Votes: \n");
	for(i=0; i<5; i++)
	{
	printf("\t\tPrecinct %d:",i+1);
	scanf("%d",&e.A[i]);
	}
		printf("\n\n");
	printf(" Candidate B Votes: \n");
	for(i=0; i<5; i++)
	{
	printf("\t\tPrecinct %d:",i+1);
	scanf("%d",&e.B[i]);
	}
		printf("\n\n");
	printf(" Candidate C Votes: \n");
	for(i=0; i<5; i++)
	{
	printf("\t\tPrecinct %d:",i+1);
	scanf("%d",&e.C[i]);
	}
		printf("\n\n");
	printf(" Candidate D Votes: \n");
	for(i=0; i<5; i++)
	{
	printf("\t\tPrecinct %d:",i+1);
	scanf("%d",&e.D[i]);
	}
	
	for(i=0;i<5; i++)
	{
		printf("%d %d %d %d\n",e.A[i],e.B[i],e.C[i],e.D[i]);
	}
	
	
	FILE *fp;
	fp=fopen("ElectionRecord.txt","w");	
	
		fwrite(&e,sizeof(struct election),1,fp);
	
	
	fclose(fp);
}




