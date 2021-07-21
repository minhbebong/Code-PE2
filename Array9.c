#include<stdio.h>
void inputArray(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void outputArray(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int size,i,k,b;
	printf("Enter size: ");
	scanf("%d",&size);
	printf("Enter k:");
	scanf("%d",&k);
	int a[size];
	inputArray(a,size);
	outputArray(a,size);
	
}
