#include<stdio.h>
int add(int a , int b ){
	return a+b;
}
int main(){
	
	int a ;
	printf("Enter the num : ");
	scanf("%d",&a);
	
	int b ;
	printf("Enter the num : ");
	scanf("%d",&b);
	
	int sum = add(a,b);
	printf("%d", sum);
	
	return 0 ;
}
