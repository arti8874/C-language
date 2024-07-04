#include<stdio.h>
int main()
{
	int a , b ;
	printf("Enter bas : ");
	scanf("%d", &a);
	
	printf("Enter power : ");
	scanf("%d", &b);
	
	int power = 1; 
	for(int i=1 ; i<=a ; i++){
		power = power*a ;
		
	}
	
	printf("the values of %d base of power %d is : %d  ",a,b,power);
	return 0 ;
}
