#include<stdio.h>
int main()
{
	int n ;
	printf("Enter a number : ");
	scanf("%d" , &n);
	
	if(n>10 && n<100){
		printf("It is a two disit number ! ");
	}
	
	if(n>99 && n<1000){
		printf("It is a three disit number ! ");
	}
	
	else{
		printf(" not in above");
	} 
}
