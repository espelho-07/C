#include<stdio.h>
int main(){
    float volume,height,radius,PI=3.14;
    printf("enter the vALUE OF radius=");
    scanf("%f",&radius);

    printf("enter the value of height=");
    scanf("%f",&height);

    volume=PI*radius*radius*height;
    printf("the volume of cylinder is=%f",volume);
    return 0;
}