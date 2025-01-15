#include<stdio.h>
int main(){
    float income;
    printf("enter the income earned=\n");
    scanf("%f",&income);
    if (income<=250000)
    {
        printf("%.02f",income);
    }
    if (income>250000 && income<=500000)
    {
        printf("%0.2f\n",((income*5)/100)+income);
    }
    if (income>500000 && income<=1000000)
    {
        printf("%0.2f\n",((income*20)/100)+income);
    } 
    if (income>1000000)
    {
        printf("%0.2f\n",((income*30)/100)+income);
    }
    
    
    return 0;
}