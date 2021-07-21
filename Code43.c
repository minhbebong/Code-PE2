#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
long long n1, n2, temp, hs;
scanf("%lld",&n1);

hs=1;
n2=0;
while(n1!=0)
{
temp=n1%10;
n2=n2+temp*hs;
hs=hs*2;
n1=n1/10;
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

printf("%lld",n2);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
