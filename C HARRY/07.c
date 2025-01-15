#include<stdio.h>
int main(){  
    int a,b,c;
    printf("enter the value of a=\n");
    scanf("%d",&a);
    printf("enter the value of b=\n");
    scanf("%d",&b);
    printf("enter the value of c=\n");
    scanf("%d",&c);
    if(a>=33){
        printf("pass in subject a\n");
    }else{
        printf("fail\n");
    }if(b>=33){
        printf("pass in subject b\n");
    }else{
        printf("fail\n");
    }if(c>=33){
        printf("pass in subject c\n");
    }else{
        printf("fail\n");
    }if(a>=33&&b>=33&&c>=33&&a+b+c>=120){
        printf("you are pass\n");
    } else{
        printf("fail\n");
    }
    return 0;
}