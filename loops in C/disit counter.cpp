#include<stdio.h>
int main()
{ /*condition right ,number is smaller then*/
	int n ;
	printf("Enter a number : ");
	scanf("%d" ,&n);
	
	int count=0;
	while(n!=0){
		n=n/10;
		count=count+1;
	}
	printf("the number you entered is %d disit number ",count);
	return 0;
}


