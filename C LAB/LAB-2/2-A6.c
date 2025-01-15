// Check whether given character is vowel or consonant. 

#include<stdio.h>
int main(){
    char input;
    printf("enter the character=\n");
    scanf("%c",&input);
    if (input=='a'||input=='e'||input=='i'||input=='o'||input=='u')
    {
        printf("the character you gave is vowel");
    }else
    {
        printf("the character is constant");
    }
    
    
    return 0;
}