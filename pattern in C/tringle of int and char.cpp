#include<stdio.h>
int main()
{
	int n ;
	printf("Enter the number if rows : ");
	scanf("%d", &n);
	
	for(int i=1 ; i<=n ; i++){
		
		int x = 0;
		 x++ ; 
    	char ch = 'A'+1;
		for(int j=1 ; j<=i ; j++){
			if(i%2==0){
				printf("%c ", ch++);
			}
			else{
				printf("%d ",x++);
			}
		}
		printf("\n");
		
	}
}
