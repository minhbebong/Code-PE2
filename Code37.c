#include <stdio.h>
int main(){
	int i, j, n;
	scanf("%d", &n);
	printf("\nOUTPUT:\n");
	//i:1,2,3,...,n
	for(i = 1;i <= n; i++){
		//j:1,2,3,...,n+1-i
		for(j = 1; j <= n; j++){
			if(i == n || j == n || n - i == j - 1 ){
				printf("*");
				}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
	
