#include<stdio.h>
int main()
{
    int age = 18 ;
    printf("enter your age here = ");
    scanf("%d" ,&age);
    
    printf("you entered %d as your age\n",age);
    
    
if(age>=18){
    printf("you can vote !");
}

else if(age>=10){
    printf("you can vote for kids");
}

else{
    printf("you can not vote for anyone");
}

    
}
