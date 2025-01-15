//Find out largest number from given three numbers

#include<stdio.h>
int main(){
    int a,b,c;
    printf("eneter the value of a=\n");
    scanf("%d",&a);
    printf("eneter the value of b=\n");
    scanf("%d",&b);
    printf("eneter the value of c=\n");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("a is largest\n");
    }if (b>a && b>c)
    {
        printf("b is largest\n");
    }if (c>b && c>a)
    {
        printf("c is largest\n");
    }
    
    return 0;
}