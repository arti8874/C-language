#include<stdio.h>
/*void swap(int a , int b){
	int tamp = a; 
	a = b ;
	b = tamp ;
	return ;
}*/
int main(){
    	int a ;
	printf("Enter  number a : ");
	scanf("%d",&a );
	
		int b ;
	printf("Enter  number b : ");
	scanf("%d",&b );
	
	a = a+b ;
	b = a-b ;
	a = a-b ;
	printf("The value of A is %d\n",a);
	printf("The value of B is %d\n",b);
	
	return 0 ;
}
