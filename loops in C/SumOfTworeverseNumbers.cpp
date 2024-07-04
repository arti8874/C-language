#include<stdio.h>
int main()
{
	int n ;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	printf("you entered %d as your number\n ",n);
	
	int r ;
	while(n>0){
		r=r*10;
		r=r+(n%10);
		n=n/10;
	}
	
	printf("the revers of this number is : %d\n", r);
	
	int sum = (n * r) ;
	printf(" The sum of thies two reverse number is %d" ,sum);

	//error
	return 0;
}
