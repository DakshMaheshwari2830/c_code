// Find the absolute value of a number through the keyboard.
#include <stdio.h>
int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    int r;
    r=abs(a);
    printf("The absolute value of %d is %d\n", a, r);
    return 0;
}