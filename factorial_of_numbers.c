#include <stdio.h>

int main() {
   int n,fact=1;
   printf("Enter the number:");
   scanf("%d",&n);
   int i;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
        
    
    return 0;
}