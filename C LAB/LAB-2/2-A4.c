//Check whether the given number is odd or even

#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a=\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("the given no. is even\n");
    }else{
        printf("the given number is odd\n");
    }
    
    return 0;
}