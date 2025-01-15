//Check whether given number is positive or negative.


#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a=\n");
    scanf("%d",&a);
    if (a>=0)
    {
        printf("the given no. is positive\n");
    }else{
        printf("the given number is negative\n");
    }
    
    return 0;
}