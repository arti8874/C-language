#include<stdio.h>
#include<math.h>
int main(){
	int a ;
	printf("Enter a number : ");
	scanf("%d",&a );
	
	int b ;
	printf("Enter a number : ");
	scanf("%d",&b );
	
	int q = pow(a,b); 		//pow is a library function
	printf("%d", q);
	return 0;
}
