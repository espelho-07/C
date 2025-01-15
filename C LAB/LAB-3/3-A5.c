/*Read marks of ve subjects. Calculate percentage and print class accordingly. Fail below 
35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to 
70, Distinction if more than 70.*/

#include<stdio.h>
int main(){
    int EVS,GK,SS,BIO,PHY,CHEM;
    float percentage;
    printf("enter the marks EVS=\n");
    scanf("%d",&EVS);
    printf("enter the marks GK=\n");
    scanf("%d",&GK);
    printf("enter the marks SS=\n");
    scanf("%d",&SS);
    printf("enter the marks BIO=\n");
    scanf("%d",&BIO);
    printf("enter the marks PHY=\n");
    scanf("%d",&PHY);
    printf("enter the marks CHEM=\n");
    scanf("%d",&CHEM);
    percentage=((EVS+GK+SS+BIO+CHEM+PHY)*0.002*100);
    printf("percentage=\n%f\n",percentage);
    if (percentage<35)
    {
        printf("you are fail\n");
    }if (percentage>=35 && percentage<=45)
    {
        printf("you are pass class\n");
    }if (percentage>=45 && percentage<=60)
    {
        printf("you are second class\n");
    }if (percentage>=61 && percentage<=70)
    {
        printf("you are first class\n");
    }if (percentage>70)
    {
        printf("you are distiction\n");
    }
    
    return 0;
}