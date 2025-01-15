// Convert number of days into year, week & days.

#include<stdio.h>
int main(){
    int days,year,week;
    printf("enter the number of days=\n");
    scanf("%d",&days);
    year=days/365;
    days=days%365;
    week=days/7;
    days=days%7;
    printf("%d %d %d",days,week,year);
    return 0;
}