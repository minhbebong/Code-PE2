#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int i,min;	
	int a[5];
	for( i=0; i < 5; i++){
		scanf("%d", &a[i]);
	}
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0; i<5; i++){
  if(a[i] % 2 == 0 && a[i] > 1){
  	if(a[i] < min){
  		min = a[i];
	  }
  }
}
  printf("%d",min);
 
 
 

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
