// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,j;
    // Write C code here
    printf("Enter number of rows ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    char ch='A'+i;
    int x=1+i;
    for(j=1;j<=i;j++){
        if(i%2==0){
            // char print 
                printf("%c ",ch++);
        }else
        {
            // digit print krne j
            printf("%d ",x++);
        }
    }
    printf("\n");
}
    return 0;
}
