#include<stdio.h>
int main()
{ 
    int P;
	printf("Enter your percentage : ");
	scanf("%d" , &P);
	
	printf("you entered %d as your percentage\n" , P);
	
	if(P>=90){
		printf("A grade\n");
	}
	
	else if(P>=70){
		printf(" B grade\n");
	}
	
	else if(P>50){
		printf(" C grade\n");
	}
	
	else if(P>=35){
		printf(" D grade\n");
	}
	
	else{
		printf("You are failed ! ");
	}
	
	return 0;
}
