#include<stdio.h>
int main(){
    float principal,rate,time,interest;
    printf("enter the value of principal=");
    scanf("%f",&principal);

    printf("enter the vALUe of rate=");
    scanf("%f",&rate);

    printf("enter the value of time=");
    scanf("%f",&time);

    interest=(principal*rate*time)/100;
    printf("the interest is%f",interest);
    return 0;
}