#include<stdio.h>
int main(){
    int year;
    printf("eneter the year;\n");
    scanf("%d",&year);
     if ((year%4==0&&year%100!=0)||(year%400==0))
     {
        printf("the year entered is a leap year");
     }else{
        printf("the year is not a leap year");
     }
     
    return 0;
}