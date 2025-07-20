//Any integer is input by the user. The program checks whether the number is even or odd.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}