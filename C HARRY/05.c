#include<stdio.h>
int main(){
    float celcius,farehniet;
    printf("enter the value of temperature in celcius =");
    scanf("%f",&celcius);

    farehniet=((9/5)*celcius+32);
    printf("the value in farehniet is%f", farehniet);
    return 0;
}