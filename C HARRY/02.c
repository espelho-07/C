#include<stdio.h>
int main(){
    float length,breadth,area;
    printf("enter the value of length= ");
    scanf("%f", &length);

     printf("enter the value of breadth= ");
    scanf("%f",&breadth);

    area=length*breadth;
    printf("the area of rectangle is= %f",area);
    return 0;
}