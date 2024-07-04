
	#include<stdio.h>
int main()
{
	int n ;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	int ld = 0;
	int sum=0;
		
	while(n!=0){
		ld=n%10;
		sum=sum+ld;
		n=n/10;
	}
	printf("the sum of thies given number is %d",sum);
	return 0;
}
