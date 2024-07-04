#include<stdio.h>
int main()
{
	int x1 ,x2 ,x3 ;
	int y1 ,y2 ,y3 ;
	
	int m1 ;
	int m2 ;
	int m3 ;
	
	printf("Enter x1 : ");
	scanf("%d", &x1);
	
	printf("Enter x2 : ");
	scanf("%d", &x2);
	
	printf("Enter x3 : ");
	scanf("%d", &x3);
	
	printf("You entered %d,%d and %d as x1,x2 and x3 !\n ", x1 ,x2 ,x3);
	
	printf("Enter y1 : ");
	scanf("%d", &y1);
	
	printf("Enter y2 : ");
	scanf("%d", &y2);
	
	printf("Enter y3 : ");
	scanf("%d", &y3);
	
	printf("You entered %d,%d and %d as y1,y2 and y3 !\n " , y1 ,y2 ,y3);
	
	m1 = (y2-y1)/(x2-x1) ;
	printf("The value of m1 is : %d\n" , m1);
	
	m2 = (y1-y2)/(x1-x2) ;
	printf("The value of m2 is : %d\n" , m2);
	
	m1 = (y3-y2)/(x3-x2) ;
	printf("The value of m3 is : %d\n" , m3);
	
	printf("The values of m1 ,m2 and m3 are %d , %d and %d\n ! ", m1 ,m2 ,m3);
	
	if(m1==m2==m3){
		printf("all the three points fall on one straight line");
	}		
	/*else if(m1!=m2!=m3!=0 ){
	    printf("the answer is not defind");
	}*/
	else{
		printf("all the three points are not fall on one straight line");
	} 
	
	
	    return 0;
}
