#include<stdio.h>
int main()
{
	int n ;
	printf("Enter a number : ");
	scanf("%d",&n);
	//1-2+3-4+5-6+7-8+.........n
	
	int sum =0 ;
	for( int i=1; i<=n;i++){
	
		if(i%2!=0){
			sum=sum+i ;
		}
		else{
			sum=sum-i ;
		}
	}
	
	printf("The sum of thies numbers is  : %d",sum );
	return 0 ;
}

