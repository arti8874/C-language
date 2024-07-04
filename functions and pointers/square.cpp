#include<stdio.h>
int main(){
	
	int n = 5 ;
//	printf("Enter a number : ");
//	scanf("%d",&n);
	int ml = 3 ;
    int nsp = n\2 ;
    int nst =1;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			printf(" ");
		}
		for(int k=1 ; k<=nst ; k++){
			printf("*");
		}
		if(i<ml){
			nsp--;
			nst++;
		}
		else{
		nsp++;
		nst-=2;
		}
		printf("\n");
	}
	return 0 ;
}
