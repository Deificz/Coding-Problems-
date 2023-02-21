#include <stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

struct name
	{
		char fname[80];
		char mname[80];
		char lname[80];
	};
	
	struct grade
	{
		char subject[3][80];
		char code[3][80];
		int unit[3];
		float grade[3]; 
	};
	struct rec
	{
		struct name n;
		struct grade g;
	};
int main()
{
	struct rec record[3];
	char pass[80]="Passed";
	char fail[80]="Failed";
	int i=0;
	int a=0;

FILE *fp;
	fp=fopen("StudentRecord.txt","r");	
	
	for (i=0; fscanf(fp, " %s %s %s ",&record[i].n.lname,&record[i].n.fname,&record[i].n.mname) == EOF; i++)
	for(a=0;fscanf(fp, "%s  %s %d %.2f %s", &record[i].g.subject[a], &record[i].g.code[a], &record[i].g.unit[a], &record[i].g.grade[a],&pass) != EOF;a++)
	
	for (i=0; i<3; i++)
	printf(" %s %s %s",record[i].n.lname,record[i].n.fname,record[i].n.mname);

	fclose(fp);	
		
return 0;
}

