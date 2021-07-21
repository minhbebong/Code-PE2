#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a,b;
  int i,j,k;
  scanf("%d %d",&a,&b);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=1; i<=a-1; i++)
	{
		for(k=1; k<=b-1; k++) {
			printf(" ");
		}
		printf("*\n");
	}
	for(k=1; k<=b; k++){
		printf("*");
	}
 
 
 

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
