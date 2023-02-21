#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

//Function Declarations
bool Operators(char ch);
bool Comment(char ch);
bool Delimiters(char ch);
bool Space(char ch);
bool Keywords(char* str);
bool NoiseWords(char* str);
bool ReservedWords(char* str);
bool Integers(char* str);
bool RealNumber(char* str);
char *righttrim(char *s);
char *lefttrim(char *s);
char *trim(char *s);
char *subString(char* str, int left, int right);
void parse(char* str);

//Main
int main()
{
	FILE *fpr;
	FILE *fpw;
	
	char ch;
	int length;
	char str[1000];
	
	fpr = fopen ("Inputs.txt", "r");
	while(ch != EOF)
	{
		ch=fgetc(fpr);
		str[length-1]=ch;
    	length++;	    	
	}
	printf ("\t\t\nProgramming Code:\n\n");
	puts(str);
	fclose(fpr);
	
	fpw = fopen("ChopSueyTable.txt", "w");
	fprintf(fpw,"_________________________________________________________________\n\n");	
	fprintf(fpw,"|\tLexemes\t\t|\t\tToken\t\t\t|\n");
	fprintf(fpw,"_________________________________________________________________\n\n");
	
	fclose(fpw);
	
	printf ("______________________________________________________________________\n\n");
	printf ("\t\t\nLexical Analyzer:\n\n");
	parse(str); 
	
	return (0);
}

//Boolean Conditions
bool Operators(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '>' || ch == '<'  || ch == '!' || ch == '=')
	
		return (true);
		
	else return (false);
}

bool Delimiters(char ch)
{
	if (ch == ' ' || ch == ',' || ch == ';' || ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || 
		ch == '}' || ch == '"' || Operators(ch)==true || Operators(ch)==true )
		
		return (true);
		
	else return (false);
}

bool Space(char ch)
{
	if (ch == ' '|| ch=='\n' || ch=='\t')
	
		return (true);
		
	else return (false);
}

bool Keywords(char* str)
{
	if (!strcmp(str, "boil") || !strcmp(str, "rest") || !strcmp(str, "chopped") || !strcmp(str, "mince") ||    
	    !strcmp(str, "pinch") || !strcmp(str, "dash") || !strcmp(str, "stir") || !strcmp(str, "int") || 
		!strcmp(str, "float") || !strcmp(str, "char") || !strcmp(str, "sitaw") || !strcmp(str, "def") ||
		!strcmp(str, "bool") || !strcmp(str, "served") || !strcmp(str, "prep") || !strcmp(str, "tray"))
		
		return (true);
		
	else return (false);
}

bool NoiseWords(char* str)
{
	 if (!strcmp(str, "ean") || !strcmp(str, "ault") || !strcmp(str, "eger") || !strcmp(str, "acter") || !strcmp(str,"integer") )
	 
		return (true);
		
	else return (false);
}

bool ReservedWords(char* str)
{
	if (!strcmp(str, "pan") || !strcmp(str, "return") || !strcmp(str, "heat") || !strcmp(str, "cold"))
	
		return (true);
		
	else return (false);
}

bool Comments(char* str)
{
	if (strstr(str, ("~~")))
		return (true);
	else return (false);
}

bool Integers(char* str)
{
	int i, len = strlen(str);

	if (len == 0)
		return (false);
	for (i = 0; i < len; i++) 
	{
		if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5'
			&& str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9' || (str[i] == '-' && i > 0))
			return (false);
			
		else if (str[0]=='-'&&isdigit(str[1]))
			return (true);
	}	
	return (true);
}

bool RealNumber(char* str)
{
	int i;
	int length = strlen(str);
	bool hasDecimal = false;

	if (length == 0)
		return (false);
	for (i = 0; i < length; i++) {
		if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5'
			&& str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9' && str[i] != '.' || (str[i] == '-' && i > 0))
			
			return (false);
			
		if (str[i] == '.')
			hasDecimal = true;
	}
	return (hasDecimal);
}

bool ValidIdentifiers(char* str)
{
	if (isdigit(str[0])==1|| Delimiters(str[0]) == true ||  ReservedWords(str)==true)
		return (false);	
		
	else return (true);	
}

//Trim Function
char *lefttrim(char *s)
{
    while(isspace(*s)) s++;
    return s;
}

char *righttrim(char *s)
{
    char* back = s + strlen(s);
    while(isspace(*--back));
    *(back+1) = '\0';
    return s;
}

char *trim(char *s)
{
    return righttrim(lefttrim(s)); 
}

char* subString(char* str, int left, int right)
{
	int i;
	char* subStr = (char*)malloc(sizeof(char) * (right - left + 2));

	for (i = left; i <= right; i++)
		subStr[i - left] = str[i];
	subStr[right - left + 1] = '\0';
	return (subStr);
}

//Main Process (Parsing)
void parse(char* str)
{
	FILE *fpw;
	int left = 0;
	int right = 0;
	int length = strlen(str);
	
	while (right <= length && left <= right) {
		
		if (Delimiters(str[right]) == false)
			right++;
		else if (Delimiters(str[right])==true && Operators(str[right]) == false && Space(str[right])==false)
			{
				printf ("'%c' is a Delimiter\n",str[right]);
				fpw  = fopen ("ChopSueyTable.txt", "a");
				fprintf(fpw, "\t%c\t\t|\t%s\t\t\t\n", str[right], "Delimeter");
				fclose(fpw);
			}
			
		if (Delimiters(str[right]) == true && left == right) 
		{
			if (Operators(str[right]) == true)
			{
				printf("'%c' is an Operator\n", str[right]);		
				fpw  = fopen ("ChopSueyTable.txt", "a");
				fprintf(fpw, "\t%c\t\t|\t%s\t\t\t\n", str[right], "Operator");
				fclose(fpw);
			}
	
			right++;			
			left = right;
		}
		else if (Delimiters(str[right]) == true && left != right || (right == length && left != right)) 				
		{
			char* subStr = subString(str, left, right - 1);
			
			if (Comments(trim(subStr)) == true && ValidIdentifiers(subStr)==true)
			{
				printf("'%s' is a Comment\n", trim(subStr));
				fpw  = fopen ("ChopSueyTable.txt", "a");
				fprintf(fpw, "\t%s\t\t|\t%s\t\t\t\n", trim(subStr), "Comment");
				fclose(fpw);
			}		
			
			if (Keywords(trim(subStr)) == true && ValidIdentifiers(subStr)==true)
			{
				printf("'%s' is a Keyword\n", trim(subStr));
				fpw  = fopen ("ChopSueyTable.txt", "a");
				fprintf(fpw, "\t%s\t\t|\t%s\t\t\t\n", trim(subStr), "Keyword");
				fclose(fpw);
			}				
			
			if (ReservedWords(trim(subStr)) == true)
			{
				printf("'%s' is a Reserved Word\n", trim(subStr));
				fpw  = fopen ("ChopSueyTable.txt", "a");
				fprintf(fpw, "\t%s\t\t|\t%s\t\t\t\n", trim(subStr), "Reserved Word");
				fclose(fpw);
			}
											
			if (NoiseWords(trim(subStr)) == true && ValidIdentifiers(subStr)==true)
			{
				if (!strcmp(trim(subStr),"integer"))
					{
						printf("'eger' is a Noise Word\n");
			        	fpw  = fopen ("ChopSueyTable.txt", "a");
				        fprintf(fpw, "\teger\t\t|\t%s\t\t\t\n", "Noise Word");
				        fclose(fpw);
					}
				if (!strcmp(trim(subStr),"boolean"))
					{
						printf("'ean' is a Noise Word\n");
			        	fpw  = fopen ("ChopSueyTable.txt", "a");
				        fprintf(fpw, "\tean\t\t|\t%s\t\t\t\n", "Noise Word");
				        fclose(fpw);
					}
				if (!strcmp(trim(subStr),"default"))
					{
						printf("'ault' is a Noise Word\n");
			        	fpw  = fopen ("ChopSueyTable.txt", "a");
				        fprintf(fpw, "\tault\t\t|\t%s\t\t\t\n", "Noise Word");
				        fclose(fpw);
					}
				if (!strcmp(trim(subStr),"character"))
					{
						printf("'acter' is a Noise Word\n");
			        	fpw  = fopen ("ChopSueyTable.txt", "a");
				        fprintf(fpw, "\tacter\t\t|\t%s\t\t\t\n", "Noise Word");
				        fclose(fpw);
					}
			}		
			else if (Integers(subStr) == true)
			{
				printf("'%s' is an Constant\n", trim(subStr));
				fpw  = fopen ("ChopSueyTable.txt", "a");
				fprintf(fpw, "\t%s\t\t|\t%s\t\t\t\n", subStr, "Constant");
				fclose(fpw);
			}				

			else if (RealNumber(subStr) == true)
			{
				printf("'%s' is a Real Number\n", subStr);
				fpw  = fopen ("ChopSueyTable.txt", "a");
				fprintf(fpw, "\t%s\t\t|\t%s\t\t\t\n", subStr, "Real Number");
				fclose(fpw);
			}				

			else if (ValidIdentifiers(trim(subStr)) == true && Delimiters(str[right - 1]) == false
					&& Keywords(trim(subStr))==false && Space(str[right-1])==false
					&& ReservedWords(subStr)==false)
			{
				printf("'%s' is a Valid Identifier\n", trim(subStr));
				fpw  = fopen ("ChopSueyTable.txt", "a");
				fprintf(fpw, "\t%s\t\t|\t%s\t\t\t\n", trim(subStr), " Valid Identifier");
				fclose(fpw);
			}				
				
			else if (ValidIdentifiers(subStr) == false && Delimiters(str[right - 1]) == false
					&& ReservedWords(subStr)==false && Space(str[right-1])==false)
			{
				printf("'%s' is not a Valid Identifier\n", trim(subStr));
				fpw  = fopen ("ChopSueyTable.txt", "a");
				fprintf(fpw, "\t%s\t\t|\t%s\t\t\t\n", trim(subStr), "Not a Valid Identifier");
				fclose(fpw);
			}				
			left = right;
		}
	}
	return;
}


