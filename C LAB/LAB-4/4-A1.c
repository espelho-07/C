// Print day name of week using switch.

#include<stdio.h>
int main(){
    int day_num;
    printf("enter the value of number=\n");
    scanf("%d",&day_num);
    switch (day_num)
    {
    case 1:
    printf("sunday\n");
        break;
    case 2:
    printf("monday\n");
        break;
    case 3:
    printf("tuesday\n");
        break;
    case 4:
    printf("wednesday\n");
        break;
    case 5:
    printf("thursday\n");
        break;
    case 6:
    printf("friday\n");
        break;
    case 7:
    printf("sataurday\n");
        break;
    default:
    printf("invalid\n");
        break;
    }
    return 0;
}