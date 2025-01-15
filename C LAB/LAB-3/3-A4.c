//Input an integer number and check the last digit of number is even or odd.

#include<stdio.h>
int main(){
    int n,last_digit;
    printf("enter the value of n=\n");
    scanf("%d",&n);
    last_digit=n%2;
    if (last_digit%2==0)
    {
        printf("the last digit is even\n");
    }else
    {
        printf("the last digit is odd\n");
    }

    return 0;
}