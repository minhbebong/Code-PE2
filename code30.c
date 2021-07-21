#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int m,n;
printf("Enter m="); scanf("%d",&m);
printf("Enter n="); scanf("%d",&n);
 int x=m ;
  int y= n;
  int r;
  while (y != 0 )
    {
      r= x%y;
      x= y;
      y= r;
    };
printf("GCD (%d  %d) = %d",m,n,x); 
  
  
  
  
  
  // Fixed Do not edit anything here.
  
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf(" %d",x); 







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
