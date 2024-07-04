#include<stdio.h>
#include<math.h>
int main(){
	int a ;
	printf("Enter a number : ");
	scanf("%d",&a );
	
	int root = sqrt(a);  //sqrt is a library function
	printf("the square root is : %d", root);
	return 0;
}
