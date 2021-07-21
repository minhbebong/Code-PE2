#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void process (char s[] , char p[]){
	int j,dem1=0,dem2=0,cat;
	int i,n;
	for (i=0 ; i<strlen(s) ; i++)
	{
	    j=i;
		for ( n = 0 ; n < strlen(p) ; n ++)  
		{
			if (s[j] == p[n])
			{
				dem1++;
				j++;
			}
		}
		if (dem1 == strlen(p))
		{
			cat=i;
			break;
		}
		dem1=0;
	}
   	if (dem1 !=0)
        printf("%d",cat);
    else
        printf("-1");
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[400],p[400];
	gets(s);
	gets(p);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	process(s,p);
 
 

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
