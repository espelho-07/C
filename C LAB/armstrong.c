#include<stdio.h>
void main(){
    int n,sum=0,rev=0,org,digit,i,j,k;
    printf("Enter the number :");
    scanf("%d",&n);
    org=n;

    for(digit=0;n!=0;digit++){
        rev=rev*10+(n%10);
        n=n/10;
    }

    

    printf("%d ",rev);

    for(n=0;rev!=0;){
        
        int multi=1;
        n=rev%10;

        for(i=0;i<digit;i++){
            multi=multi*n;
        }

        // printf("%d ",multi);

        sum=sum+multi;
        multi=0;
        rev=rev/10;
        
    }
    

    if(sum==org){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is Not Armstrong");
    }
}