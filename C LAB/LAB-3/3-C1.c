// Find the second largest number among three user input numbers.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a=\n");
    scanf("%d",&a);
    printf("enter the value of b=\n");
    scanf("%d",&b);
    printf("enter the value of c=\n");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("the gretest of all is a\n");
    }else if (b>a && b>c)
    {
        printf("the greates of all time is b\n");
    }else if (c>a && b<c)
    {
        printf("the greates of all time is c\n");
    }
    return 0;
}