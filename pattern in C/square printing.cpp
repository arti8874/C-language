#include<stdio.h>
int main()
{
	int L ;
	printf("Enter lenth : ");
	scanf("%d", &L);
	
	int B ;
	printf("Enter breath : ");
	scanf("%d", &B);
	
	for(int i=1 ; i<=L ; i++){
		
		for(int i=1 ; i<=B ; i++){
			printf("*");
		}
			printf("*\n");
	}
	
}
