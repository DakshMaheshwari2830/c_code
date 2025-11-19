#include <stdio.h>

int main() {
    
        int n,count=0;
        printf("Enter the number:");
        scanf("%d",&n);
        do{
            n=n/10;
            count++;
        }
        while(n>0);
        printf("digits in a number=%d",count);
        
    
   

    return 0;}