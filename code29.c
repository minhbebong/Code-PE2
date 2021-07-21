#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
long gt(int n)
{ long temp=1;
int i;
for(i=1;i<=n;i++)
temp=temp*i;
return(temp);


}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n;
float x,s;
printf("n=");scanf("%d",&n);
printf("x=");scanf("%f",&x);

float tu=-x*x;
s=1;
int i;
for(i=1;i<=n;i++)
	{s=s+tu/gt(2*i);
	tu=-tu*x*x;
	 }
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%f",s);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
