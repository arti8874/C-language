#include<stdio.h>
int main()
{
	int n ;
	printf("Enter the number of rows :"); //   ||
	scanf("%d",&n);
	
	int m ;
	printf("Enter the number of columbs :"); //---
	scanf("%d",&m);
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m; j++){
			
			int a =                ////////////put the condition
			if(n==a || m==a){
			printf("* ");}
			
			else printf(" ");
		}
		
		printf("\n");
	}
}
