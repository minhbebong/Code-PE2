#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int IsPrime(int n) {//return 1 is n a prime number, otherwise return 0
	if(n < 2) return 0;
	if(n == 2) return 1;
	int i;
	for (i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i;
	scanf("%d",&n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(i=100; i<=n; i++)
{
if(IsPrime(i)==1) printf("%d ",i);
}
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
