#include<stdio.h>
int main()
{
	int n ;
	printf("enter a number : ");
	scanf("%d", &n);
	
	printf("you entered %d as a number\n", n);
	
	if(n%5==0){
	        if(n%3==0){
	        	printf("this number is totally devided by 3 and 5 ");
			}
			else("this number is totally devided by 5 but not 3 !");
	}
	else("this number is not devided by 3 and 5 anymore !");
}
