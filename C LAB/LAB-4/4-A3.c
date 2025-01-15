/*Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s 
choice using switch.*/

#include<stdio.h>
int main(){
    int n,a,b;
    printf("enter the value of a=\n");
    scanf("%d",&a);
    printf("enter the value of b=\n");
    scanf("%d",&b);
    printf("enter the value of n=\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:{
        printf("addition=%d\n",a+b);
        break;}
    case 2:{
        printf("subtraction=%d\n",a-b);
        break;}
    case 3:{
        printf("multiplication=%d\n",a*b);
        break;}
    case 4:{
        printf("divide=%d\n",a/b);
        break;}
    
    default:{
        printf("invalid");
    }
        break;
    }
    return 0;
}