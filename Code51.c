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

int sumdigit(int n)
{
int s=0;
	while(n!=0)
	{
	s=s+n%10;
	n=n/10;
	}
return s;	
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,i,check1, check2,count=0;
scanf("%d",&n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(i=100; i<=n; i++)
{
	check1=IsPrime(i);
	check2=sumdigit(i);
	if(check1==1&&(check2==5||check2==10)) 
		{
			printf("%d ",i); 
			count++;
		}
}
  
  if(count==0) printf("No solution");
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
