#include<stdio.h>
int main()
{
	int n ; 
	printf("Enter the number of rows : ");
	scanf("%d", &n);
	
	 	int nsp	= n -1 ;								
	 	for(int i=1 ; i<=n ; i++){  
		 
		 for(int q=1 ; q<=nsp ; q++){      				//spaces ke liye
		 	printf(" ");
		 }
		 nsp-- ;
		      
	        for(int j=1 ; j<=i ; j++){						// for just a tringle 
			printf("%d", j);
		}
		 int a = i-1 ;											// for dicresing numbers
	 	for(int k=1 ;k<=i-1 ; k++){							
	 		printf("%d", a);
	 		a-- ;
		 }
	 		printf("\n");
	}
		return 0 ;
}
