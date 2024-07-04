#include<stdio.h>
int main()
{
	int age,marks;
	printf("enter your age here = ");
	scanf("%d", &age);
	
	printf("enter your marks here = ");
	scanf("%d", &marks);
	
	printf("you entered %d as your age and %d as your marks\n", age,marks);
	
	switch(age){
		case 3 :
			printf("your age is 3\n");
			  printf("your marks are\n");
			       break;
			}
	switch(age){
		case 13 :
			printf("your age is 13\n");
			  printf("your marks are\n", marks);
			break;
			}
	switch(age){
		case 23 :
			printf("your age is 23\n");
			  printf("your marks are\n");	
			break;
			
		default : 
		  printf("your are is not  3,13 and 23");
			}
}
