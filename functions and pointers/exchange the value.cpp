#include<stdio.h>
void swap(int* x , int* y){
	int tamp ;
	tamp = *x ;
	*x = *y ;
	*y = tamp ;
	
	return ;
}
int main(){
	int a ;//= 2;
	printf("Enter a : ");
	scanf("%d",&a);
	
	int b ;// = 9;
	printf("Enter b : ");
	scanf("%d",&b);
	swap(&a ,&b);
	printf("The value of a is %d\n",a);
	printf("The value of b is %d",b);
	
	return 0 ;
}
