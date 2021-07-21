#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a,b,opare;
	scanf("%d %d %d",&a,&b,&opare);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(opare == 1){
		printf("%d",a+b);
	}
	else if (opare == 2 ){
		printf("%d",a-b);
	}
	else if (opare == 3){
		printf("%d",a*b);
	}	
	else {
		printf("%f",1.0*a / b);
	}
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
