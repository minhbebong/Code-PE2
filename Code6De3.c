#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void sortDecc(int a[], int n)
{ 
	int i,j;
	for( i=1;i<=n-1;i++){
		for( j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				int T=a[i];
				a[i]=a[j];
				a[j]=T;
			}
		}
	}
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int i;
	int a[10];
	for(i = 1; i<=6 ; i++ ){
		scanf("%d",&a[i]);
	}
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	sortDecc(a,6);
	for(i = 1; i<=6; i++ ) {
			printf("%d ",a[i]);	
		}
 
 

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
