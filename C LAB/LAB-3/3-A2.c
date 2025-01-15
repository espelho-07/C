/*Enter basic salary of an employee and calculate Gross salary according to given 
conditions:- Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basi*/

#include<stdio.h>
int main(){
    float basicsalary,grosssalary=0,HRA,DA;
    printf("enter the basic salary provided=\n");
    scanf("%f",&basicsalary);
    if (basicsalary>=10000 && basicsalary<20000)
    {
        HRA=0.2*basicsalary;
        DA=0.8*basicsalary;
        grosssalary=HRA+DA;
        
    }
    else if (basicsalary>=20000 && basicsalary<30000)
    {
        HRA=0.25*basicsalary;
        DA=0.9*basicsalary;
        grosssalary=HRA+DA;
        
    }
    else if (basicsalary>=30000)
    {
         HRA=0.3*basicsalary;
        DA=0.95*basicsalary;
        grosssalary=HRA+DA;
        
    }
    printf("%f",grosssalary);
    return 0;
}