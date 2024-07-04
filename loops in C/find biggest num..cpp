#include<stdio.h>
int main()
{
    int a ;
    int b ;
    int c ;
    
    printf("enter 1 number : " );
    scanf("%d", &a);
    
    printf("enter 2 number : ");
    scanf("%d", &b);
    
    printf("enter 3 number : ");
    scanf("%d", &c);
    
    if(a>b && a>c)
    {
    	printf("%d is the greatest number ._. !",a);
	}
	
	if(b>a && b>c)
    {
    	printf("%d is the greatest number !",b);
	}
	
	if(c>a && c>b)
    {
    	printf("%d is the greatest number !",c);
	}
}
