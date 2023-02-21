/* Group           : 8
Written by         : Lazo, Aeron Brylle R.
Date of completion : September 19,2019
Class/Yr/Sec       : BSCS 1-1
Activity           : Take home Quiz
*/

#include <stdio.h>
#include <windows.h>
int main ()
// Declaration
{
int classnum;
int student[150];
float grade[150];
int cout = 0;
int temp = 0;
int temp2 = 0;
float average;
float temps = 0;
int i;

// Inputs
printf("\n\n\n\t\t\t\t\t\t Gradesheet");
printf("\n\t\t\t\t\t\tProgramming 1\n");
printf("\n\t\t\tInput Class Size     : ");
scanf("%d",&classnum);
cout = classnum;

for (int i=0; cout!=0; --cout){
printf("\n\t\t\tInput Student Number : ");
scanf("%d",&temp);
student[i] = temp;
printf("\t\t\tInput Your Grade     : ");
scanf("%d",&temp2);
temps = temps + temp2;
grade[i] = temp2 ;
++i;
}
system("cls");
printf("\n\n\n\t\t\t\t\t\t Gradesheet");
printf("\n\t\t\t\t\t\tProgramming 1\n");

// Average
average = temps/classnum;
printf("\n\n\n\t\t\t\t\tClass Average: %.2f \n",average);


// Outputs
cout = classnum;
printf("\t\t________________________________________________________________");
printf("\n\n\t\t\tStudent Number           Grade             Remarks\n");
printf("\t\t________________________________________________________________\n");
for (int i=0; cout!=0; --cout){
{if (grade[i]>average){
printf("\n\t\t\t  %d                  %.2f          Above Average\n",student[i],grade[i]);
printf("\t\t________________________________________________________________\n");}
else if (grade[i]<average){
printf("\n\t\t\t  %d                  %.2f          Below Average\n",student[i],grade[i]);
printf("\t\t________________________________________________________________\n");}
else{
printf("\n\t\t\t  %d                  %.2f             Average\n",student[i],grade[i]);
printf("\t\t________________________________________________________________\n");}}
++i;
}
printf("\t\n\n\n\n");
}
