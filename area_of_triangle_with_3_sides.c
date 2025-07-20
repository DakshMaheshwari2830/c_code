#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter the values of a,b,c/n");
    scanf("%d,%d,%d",&a,&b,&c);

    int A;
    int s;
    
    s=a+b+c/2;
    printf("%d/n,&S");
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle %d",&A);
    return 0;
}