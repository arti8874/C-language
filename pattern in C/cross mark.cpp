#include<stdio.h>
int main(){
	
				//perfect for odd numbers
	int n ;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			
			int a=n+1 ;
				if(j==i || i+j==a ){
				printf("#");
			}
			else{
				printf(" ");
			} 
			      }
			     printf("\n");
			  }
			return 0;
}
