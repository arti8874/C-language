#include<stdio.h>
int main()
{
	int n ;
	printf("Enter a number : ");
	scanf("%d" , &n);
	
	for(int i=1 ; i<=n ; i++){
		int a =1 ;
		for(int j=1 ; j<=n ; j++){
		 int d = a+64 ; //d = a(1) + 64=65
		 char ch = (char)d;  //(char)d=bcoz we want to change int d in form of character
		a++;
			printf("%c ",ch);
		}
		printf("\n");
	}
	
	
	return 0 ;
}

