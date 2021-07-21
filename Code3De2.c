#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,j,k;
	double t,a[5];
	for(i=0; i<5; i++){
		scanf("%lf",&a[i]);
	}
// Sap xep tang dan
	for(i=0; i<4; i++){
		for(k=i+1; k<5; k++){
			if(a[i]>a[k]){ 
				t=a[i]; 
				a[i]=a[k]; 
				a[k]=t; 
			}
		}
	}
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<5; i++){
 		printf("%.3lf ",a[i]);
 	}
 
 

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
