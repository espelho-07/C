/*Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s 
choice.*/

#include<stdio.h>
int main(){
    int n,add,subtract,divide,mulptiplication,a,b;
    //n=1 add,,n=2 subtract,,n=3 multiplication,,n=4 divide
    printf("enter the value of a=\n");
    scanf("%d",&a);
    printf("enter the value of b=\n");
    scanf("%d",&b);
    printf("enter the value of n=\n");
    scanf("%d",&n);
    if (n==1)
    {
        add=a+b;
        printf("addition=%d",add);
    }if (n==2)
    {
        subtract=a-b;
        printf("subtraction=%d",subtract);
    }if (n==3)
    {
        mulptiplication=a*b;
        printf("multiplication=%d",mulptiplication);
    }if (n==4)
    {
        divide=a/b;
        printf("divide=%d",divide);
    } 
    
    return 0;
}