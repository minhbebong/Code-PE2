#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void Xoa(char s[]){
	int i,j;
	for(i=0; i< strlen(s); i++){
		int KT = 0;
		for(j=i+1; j<strlen(s); j++){
			if(s[i] == s[j]){
				 KT = 1;
				 Xoa(s, j);
				 j--; 
			}
		}
		if(KT == 1){
			Xoa(s,i);
			i--;
		}
	}
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[100];
  scanf("%99[^\n]",s);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 	Xoa(s);
 	printf("%c",s);
 

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
