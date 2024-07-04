#include<stdio.h>
void decreesing(int n ){
	if(n<=0) return;
	printf("%d\n",n);
     decreesing(n-1);
     return ;
}
int main(){
	int n ;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	decreesing(n);
	return 0 ;
	
}
