#include <stdio.h>
int fact(int);
int a;
int main() {
    printf("Enter the value of a:");
    scanf("%d",&a);
    fact(a);
    return 0;}
int fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d",x,fact);
} 