/*Input electricity unit charge and calculate the total electricity bill according to the given 
condition:- For rst 50 units Rs. 0.50/unit- For next 100 units Rs. 0.75/unit- For next 100 units Rs. 1.20/unit- For unit above 250 Rs. 1.50/unit- An additional surcharge of 20% is added to the bill.
*/

#include<stdio.h>
int main(){
    float n,bill,charge;
    printf("enter the number of unit=\n");
    scanf("%f",&n);
    if (n<=50)
    {
        charge=(n*0.50);
    }if (n>=50 && n<=150)
    {
        charge=((50*0.50)+((n-50)*0.75));
    }if (n>=150 && n<=250)
    {
        charge=((50*0.50)+(100*0.75)+((n-150)*1.20));
    }if (n>250)
    {
        charge=((50*0.50)+(100*0.75)+(250*1.20)+((n-250)*1.50));
    }
    bill=(0.2*charge)+charge;
    printf("Bill=%f\n",bill);
    return 0;
}