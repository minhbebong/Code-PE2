#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int arr[5];
  int rs[5],i,j;
  int count = 0;
  for(i=0;i<5;i++){
  	scanf("%d",arr[i]);
  	if(arr[i]%2==0){
  		rs[count]=arr[i];
	}
	  count++;
  }
  for(i=0;i<count;i++){
  	for(j = i+1;j<count-i-1;j++){
  		if(rs[j]<rs[j+1]){
  			int temp = rs[j];
  			rs
			[j]= rs[j+1];
  			rs[j+1]=temp;
		  } 
	  }
  }
 
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<count;i++){
		printf("%d ",rs[i]);
	}
 
 

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
