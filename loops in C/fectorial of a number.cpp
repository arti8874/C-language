	#include<stdio.h>
int main()
{
	int n ;
	printf("Enter a number : ");
	scanf("%d", &n);
	//5! it means fectorial of 5 is = 5*4*3*2*1
	
	int product = 1 ;
	for(int i=1 ; i<=n ; i++){
		product = product * i ;
}
	printf("Fectorial of this number is %d ", product);
	return 0 ;
}
