// where t is the temperature and v is the wind velocity.Write a program to recieve the values of t and v and calculate the wind chill index using the formula WCI = 35.74 + 0.6215*t - 35.75*pow(v,0.16) + 0.4275*t*pow(v,0.16).
#include<stdio.h>
#include<math.h>

int main(){
        int t,v;
    printf("enter the value of t,v");
    scanf("%d,%d",&t,&v);
    float wcf;
    wcf= 35.74 + 0.6215*t - 35.75*pow(v,0.16) + 0.4275*t*pow(v,0.16);
    printf("%f",wcf);
    return 0;
}