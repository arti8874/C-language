#include<stdio.h>
int main()
{    
    int x;
    int y;
    
    printf("Enter the x point : ");
    scanf("%d" , &x);
    
    printf("Enter the y point : ");
    scanf("%d" , &y);
    
    printf("you entered %d as x point and %d as y point\n" , x,y);
    
    
	if(x==0 && y==0){
		printf("The point is origin");
	}
	 
	else if(x==0){
		printf("Lies on y axis");
	}
	
	else if(y==0){
		printf("Lies on x axis");
	}
	
	else{
		printf("The point is not lies on x or y axis ! ");
	}
	
	return 0;
}
