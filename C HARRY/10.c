#include<stdio.h>
int main(){
    char c ;
    printf("enter the value of character:");
    scanf( "%c",&c);
    if (c>=97 && c<=122)
    {
        printf("the entered character is lowecsee\n");
    }else{   
        printf("the entered character is uppercase\n");
    }
    
    return 0;
}