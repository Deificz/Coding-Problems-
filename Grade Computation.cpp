
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoXY(int x, int y);
void gotoXY(int x, int y, string text);
void Draw(int style, int col, int row, int length,int amount, bool filled);

int Grading()
{
	Draw(1,2,0,76,25,0);
	int Q1A,Q1T,Q2A,Q2T,Q3A,Q3T,Q4A,Q4T,
		LEA,LET,PA,PT,S1A,S1T,S2A,S2T,
		HW1A,HW1T,HW2A,HW2T,L1A,L1T,L2A,L2T;
	float QAT,QTT,SAT,STT,HWAT,HWTT,LAA,LTT;
	float A,LER,PR,SHLR;
	float MG;
	float unigrade;
	char percent = '%';
	char answer;

	gotoXY(25,2);
	printf("PUP CCIS Midterm Grade Computation\n");
	gotoXY(29,3);
	printf("SY 2019-2020 1st Semester\n");
	gotoXY(17,5);
	printf("Quizzes           :   Actual		Total \n");
	gotoXY(17,6);
	printf("Quiz 1            :   \n");
	gotoXY(17,7);
	printf("Quiz 2            :   \n");
	gotoXY(17,8);
	printf("Quiz 3            :   \n");
	gotoXY(17,9);
	printf("Quiz 4            :   \n");
	gotoXY(17,10);
	printf("   Average        :   \n");
	gotoXY(17,11);
	printf("Long Exam         :   \n");
	gotoXY(17,12);
	printf("   Average        :   \n");
	gotoXY(17,13);
	printf("Seatwork 1        :   \n");
	gotoXY(17,14);
	printf("Seatwork 2        :   \n");
	gotoXY(17,15);
	printf("Homework 1        :   \n");
	gotoXY(17,16);
	printf("Homework 2        :   \n");
	gotoXY(17,17);
	printf("Laboratory 1      :   \n");
	gotoXY(17,18);
	printf("Laboratory 2      :   \n");
	gotoXY(17,19);
	printf("   Average        :   \n");
	gotoXY(17,20);
	printf("Project           :   \n");
	gotoXY(17,21);
	printf("   Average        :   \n");
	gotoXY(17,22);
	printf("   Midterm Grade  :   \n");


	gotoXY(39,6);
	scanf("%d",&Q1A);
	gotoXY(56,6);
	scanf("%d",&Q1T);
	if (Q1A > Q1T)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,7);
	scanf("%d",&Q2A);
	gotoXY(56,7);
	scanf("%d",&Q2T);
	if (Q2A > Q2T)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,8);
	scanf("%d",&Q3A);
	gotoXY(56,8);
	scanf("%d",&Q3T);
	if (Q3A > Q3T)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,9);
	scanf("%d",&Q4A);
	gotoXY(56,9);
	scanf("%d",&Q4T);
	if (Q4A > Q4T)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,11);
	scanf("%d",&LEA);
	gotoXY(56,11);
	scanf("%d",&LET);
	if (LEA > LET)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,13);
	scanf("%d",&S1A);
	gotoXY(56,13);
	scanf("%d",&S1T);
	if (S1A > S1T)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,14);
	scanf("%d",&S2A);
	gotoXY(56,14);
	scanf("%d",&S2T);
	if (S2A > S2T)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,15);
	scanf("%d",&HW1A);
	gotoXY(56,15);
	scanf("%d",&HW1T);
	if (HW1A > HW1T)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,16);
	scanf("%d",&HW2A);
	gotoXY(56,16);
	scanf("%d",&HW2T);
	if (HW2A > HW2T)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,17);
	scanf("%d",&L1A);
	gotoXY(56,17);
	scanf("%d",&L1T);
	if (L1A > L1T)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,18);
	scanf("%d",&L2A);
	gotoXY(56,18);
	scanf("%d",&L2T);
	if (L2A > L2T)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}
	gotoXY(39,20);
	scanf("%d",&PA);
	gotoXY(56,20);
	scanf("%d",&PT);
	if (PA > PT)
			{
				system("cls");
				Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("Invalid Input: Actual > Total\n\n\n\n");
				system("PAUSE");
				return 0;
			}

	QAT = Q1A+Q2A+Q3A+Q4A;
	QTT = Q1T+Q2T+Q3T+Q4T;
	SAT = S1A+S2A;
	STT = S1T+S2T;
	HWAT = HW1A+HW2A;
	HWTT = HW1T+HW2T;
	LAA = L1A+L2A;
	LTT = L1T+L2T;

	A = (QAT)/(QTT)*100;
	LER = LEA/LET*100;
	PR = PA/PT*100;
	SHLR = (SAT+HWAT+LAA)/(STT+HWTT+LTT)*100;
	MG = A*0.3+LER*0.3+PR*0.2+SHLR*0.2;

	

	gotoXY(39,10);
	printf("%0.2f",A);
	gotoXY(39,12);
	printf("%0.2f",LER);
	gotoXY(39,19);
	printf("%0.2f",SHLR);
	gotoXY(39,21);
	printf("%0.2f",PR);
	gotoXY(39,22);
	printf("%0.2f",MG);
	
	
	if (MG>=65 && MG<=74)
    	{
    		unigrade = 4;
		gotoXY(17,23);
        printf("Your midterm grade is %0.2f%c, %0.2f,Conditional \n\n\n\n\n", MG,percent,unigrade);
		}
	else if (MG == 75)
        {
        	unigrade = 3;
		gotoXY(17,23);
        printf("Your midterm grade is %0.2f%c, %0.2f,Passing \n\n\n\n\n", MG,percent,unigrade);
		}
	else if (MG>=94 && MG<=100)
        {
        	unigrade = 1;
		gotoXY(17,23);
        printf("Your midterm grade is %0.2f%c, %0.2f,Excellent \n\n", MG,percent,unigrade);
		}
    else if (MG>=88 && MG<=93)
        {
        	unigrade = 1.75;
		gotoXY(17,23);
        printf("Your midterm grade is %0.2f%c, %0.2f,Very Good \n\n\n\n\n", MG,percent,unigrade);
		}
    else if (MG>=82 && MG<=87)
        {
        	unigrade = 2;
		gotoXY(17,23);
        printf("Your midterm grade is %0.2f%c, %0.2f,Good \n\n\n\n\n", MG,percent,unigrade);
		}
    else if (MG>=76 && MG<=81)
        {
        	unigrade = 2.75;
		gotoXY(17,23);
        printf("Your midterm grade is %0.2f%c, %0.2f,Satisfactory \n\n\n\n\n", MG,percent,unigrade);
		}
    else
        {
        	unigrade = 5;
		gotoXY(17,23);
        printf("Your midterm grade is %0.2f%c, %0.2f,Failure \n\n\n\n\n", MG,percent,unigrade);
		}
	
	
	system("pause");
	return 0;
}

void rec(int num)
{
    if (num==0) return;
    rec(num>>1);
    printf("%d", num%2);
}

void DecimalToOctal(int o) 
{ 
    int octalNumber[100]; 
    int i = 0; 
    while (o != 0) 
	{ 
        octalNumber[i] = o % 8; 
        o = o / 8; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << octalNumber[j]; 
} 

void DecimalToHexadecimal(long input) 
{    
    char hexaDeciNumber[100]; 
    int i = 0; 
    while(input!=0) 
    {    
        int temp  = 0; 
        temp = input % 16; 
        if(temp < 10) 
        { 
            hexaDeciNumber[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNumber[i] = temp + 55; 
            i++; 
        } 
        input = input/16; 
    } 
    for(int j=i-1; j>=0; j--) 
        cout << hexaDeciNumber[j]; 
} 

int Conversion()
{
	Draw(1,2,0,76,20,0);
	long input;
	int format;
	
	gotoXY(37,5);
	printf("Converter");
	gotoXY(23,7);
	printf("Decimal to Binary,Octal or Hexadecimal");
	gotoXY(23,10);
	printf("Value             :");
	gotoXY(43,10);
	scanf("%ld",&input);
	gotoXY(23,12);
	printf("Expected Format   :");
	gotoXY(43,12);
	scanf("%d",&format);
	
	if(format!= 2 && format!= 8 && format!= 16 )
	{
		gotoXY(23,15);
		printf("Invalid Input!\n\n\n\n\n");
	}
	else if(format == 2)
	{
		gotoXY(23,14);
		printf("%ld base 10 is ",input);
		rec(input);
		printf(" base %d\n\n\n\n\n\n",format);
	}
	else if(format == 8)
	{
		gotoXY(23,14);
		printf("%ld base 10 is ",input);
		DecimalToOctal(input);
		printf(" base %d\n\n\n\n\n\n",format);
	}
	else if(format == 16)
	{
		gotoXY(23,14);
		printf("%ld base 10 is ",input);
		DecimalToHexadecimal(input);
		printf(" base %d\n\n\n\n\n\n",format);
	}
	
	
	system("pause");
	return 0;
}

int Exit()
{
	Draw(1,20,8,39,5,0);
				gotoXY(25,10);
				printf("-----------Good Bye-----------\n\n\n\n");
			system("pause");
			return 0;
}

int main()
{
    Draw(1,28,0,25,20,0);
	int option;
	gotoXY(37,3);
	printf("PUP CCIS");
	gotoXY(34,4);
	printf("Midterm Project");
	gotoXY(33,5);
	printf("S.Y. 2019 - 2020");
	gotoXY(38,7);
	printf("MENU");
	gotoXY(33,9);
	printf("(1) Grade");
	gotoXY(33,10);
	printf("(2) Conversion");
	gotoXY(33,11);
	printf("(3) Exit");
	gotoXY(33,13);
	printf("Option: ");
	scanf("%d", &option);
    
    if(option != 1 && option != 2 && option != 3)
    {
    	gotoXY(33,15);
    	printf("Invalid Input!\n\n\n\n");
	}
    
	switch (option)
	{
		case 1:
			system("cls");
			Grading();
			break;
		
		case 2:
			system("cls");
			Conversion();
			break;
			
		case 3:
			system("cls");
			Exit();
			break;

	}
}


void gotoXY(int x, int y) 
{ 
	CursorPosition.X = x; 
	CursorPosition.Y = y; 
	SetConsoleCursorPosition(console,CursorPosition); 
}

void gotoXY(int x, int y, string text) 
{ 
	CursorPosition.X = x; 
	CursorPosition.Y = y; 
	SetConsoleCursorPosition(console,CursorPosition);
	cout << text;
}

void Draw(int style, int col, int row, int length,int amount, bool fill)
{
	int a;
	style=(style-1)*6;
	char box[6];
	
	
	box[0] = '\xC9';
	box[1] = '\xBB';
	box[2] = '\xC8';
	box[3] = '\xBC';
	box[4] = '\xBA';
	box[5] = '\xCD';
	char tl,tr,bl,br,side,edge;
	tl = box[style];
	tr = box[style+1];
	bl = box[style+2];
	br = box[style+3];
	side = box[style+4];
	edge = box[style+5];
	string Line(length-2,edge);
	string Fill(length-2, ' ');
	gotoXY(col,row);
	cout << tl << Line << tr;
	for (a = 1; a <amount-1;a++)
	{
		gotoXY(col,row+a);
			cout << side;
		if  (fill)
			cout << Fill;
		else		
			gotoXY(col+length-1,row+a);
		cout << side;
		
	}
	gotoXY(col,(amount+row)-1);
	cout << bl << Line << br;
	system("COLOR F2");
}
