#include<stdio.h>
int main()
{   
	int a;
	printf("Enter 1st side : ");
	scanf("%d", &a);
	
	int b;
	printf("Enter 2nd side : ");
	scanf("%d", &b);
	
	int c;
	printf("Enter 3rd side : ");
	scanf("%d", &c);
	
	if( (a+b)>c && (b+c)>a && (c+a)>b ){
		printf("this is a valid triangle");
	}
	else{
		printf("thies sides are not valid as a triangle's side");
	}
	

}
