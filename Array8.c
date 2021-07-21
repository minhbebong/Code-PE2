//#include <stdio.h>
//int main(){
//	int n,i,b;
//	printf("Nhap n:");
//	scanf("%d",&n);
//	int a[n];	
//	for(i=0 ; i < n; i++)
//		scanf("%d", &a[i]);
//	b =0;
//	printf("So chan:");
//	for(i=0; i < n; i++){
//		if(a[i] % 2 == 0){
//			printf("%d ",a[i]*10);
//		}
//	}
//	printf("So le : ");
//	for(i=0; i < n; i++){
//		if(a[i] % 2 != 0){
//			printf("%d ",a[i]*9);	
//		}
//	}
//	return 0;
//}


#include <stdio.h>
int main(){
	int n,i,b;
	printf("Nhap n:");
	scanf("%d",&n);
	int a[n];	
	for(i=0 ; i < n; i++)
		scanf("%d", &a[i]);
	b =0;
	for(i=0; i < n; i++){
		if(a[i] % 2 == 0){
			printf("%d ",a[i]*10);
		}
		else {
			printf("%d ",a[i]*9);
		}	
	}
	
}
