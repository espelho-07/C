//Print area of triangle.

#include<stdio.h>
int main (){
    float area;
    int height,base;
    printf("enter the value of height=\n");
    scanf("%d",&height);
    printf("enter the value of base=\n");
    scanf("%d",&base);
    area=(height*base)/2;
    printf("%f\n ",area);
    return 0;
}