#include<stdio.h>
int main()
{	

	/*          
				
			1	* * * * * * *
			2	* * *   * * *
			3	* *       * *
			4	*			*		*/
				 
	int n ;
	printf("Enter the number of row : ");
	scanf("%d", &n);
	
	
	int m ;
	printf("Enter the number of hight : ");
	scanf("%d", &m);
	
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			printf(" #");
		}
		
		for( int k=1 ; k<=n/2+1; k++){
		printf("* ");  
		--i ;
					  //only ("* ") can(change) make a perfect angle of ^
			}
		printf("\n");
	}
}



		
				 
				   
