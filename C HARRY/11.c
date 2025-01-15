#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the value of a=\n");
    scanf("%d",&a);
    printf("enter the value of b=\n");
    scanf("%d",&b);
    printf("enter the value of c=\n");
    scanf("%d",&c);
    printf("enter the value of d=\n");
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
        printf("the gretest of all is a\n");
    }else if (b>a && b>c && b>d)
    {
        printf("the greates of all time is b\n");
    }else if (c>a && b<c && c>d)
    {
        printf("the greates of all time is c\n");
    }else if (d>a && d>c && b<d)
    {
        printf("the greates of all time is d\n");
    }
    
    
    return 0;
}