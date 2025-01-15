//Convert seconds into hours, minutes & seconds and print in HH:MM:SS

#include<stdio.h>
int main(){
    int seconds,hours,minutes,seconds_left;
    printf("enter the seconds=\n");
    scanf("%d",&seconds);
    hours=(seconds/3600);
    minutes=(seconds%3600)/60;
    seconds_left=seconds%60;
    printf("%d %d %d\n",hours,minutes,seconds_left);
    return 0;
}