//Write a program to recieve Cartestian coordinates (x, y) and convert them to polar coordinates (r, θ).
#include<stdio.h>
#include<math.h>

int main(){
    int x,y;
    printf("enter the values of x,y");
    scanf("%d,%d",&x,&y);
    float r;
    r=sqrt((pow(2.0,x))+(pow(2.0,y)));
    printf("%f",r);
    float z;
    z=atan(y/x);
    printf("%f",z);
    return 0;
}