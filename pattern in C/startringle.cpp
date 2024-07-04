#include<stdio.h>
int main()
{
	int n ; 
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	
	int nsp ;
	int nst ;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=nsp ; j++){
			printf("");
		}
		
		for(int k=1 ; k<=nsp ; k++){
			printf(" *");
		}
		
		nsp++ ;
		nst-- ;
		printf("\n");
	}
}

