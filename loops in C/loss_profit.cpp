#include<stdio.h>
int main()
{
  int a ;
  
  printf("mobile's price that you sold : ");
  scanf("%d", &a);
  
  printf("you entered %d as mobile's price !\n " , a);
  
  if(a>20000)
  {
  	printf("hurry , you got profit");
  }
  
  if(a<18000)
  {
  	printf(" ._. you got loss");
  }
  
  
}
