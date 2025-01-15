/*Check whether the entered character is upper case, lower case, digit or any special 
character.*/

#include<stdio.h>
int main(){
    char c;
    printf("enter the character c=\n");
    scanf("%c",&c);
    if (c>='A' && c<='Z')
    {
        printf("the character is uppercase");
    }else if (c>='a' && c<='z')
    {
        printf("the character is lowercase");
    }else if (c>=0 && c<=9)
    {
        printf("the character is digit");
    }else
    {
        printf("the charcter is an special symbol");
    }
    
    
    return 0;
}