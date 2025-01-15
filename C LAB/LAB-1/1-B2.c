//Print simple interest

#include<stdio.h>
int main(){
    float principal,rate,time,interest;
    printf("enter the value of principal=\n");
    scanf("%f",&principal);

    printf("enter the vALUe of rate=\n");
    scanf("%f",&rate);

    printf("enter the value of time=\n");
    scanf("%f",&time);

    interest=(principal*rate*time)/100;
    printf("the interest is%f",interest);
    return 0;
}