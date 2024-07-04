#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	
	int a ;
	for(int i = 1 ; i<=n ; i++){
		printf("%d\n" , a);
		
		a = a+2;
	}
	return 0;
}
