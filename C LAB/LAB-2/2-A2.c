// Swap two numbers. (Using temporary variable and without using temporary variable

#include<stdio.h>
int main(){
    int a,b,t;
    printf("enter the value of a=\n");
    scanf("%d",&a);
    printf("enter the value of b=\n");
    scanf("%d",&b);
    a=t;
    b=a;
    t=b;
    printf("%d %d",a,b);
    return 0;
}