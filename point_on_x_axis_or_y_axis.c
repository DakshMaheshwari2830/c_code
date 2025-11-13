#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the x:");
    scanf("%d",&x);
    printf("Enter the y:");
    scanf("%d",&y);
    if(x==0 && y==0)
    {
        printf("point lie on origin");
    }
    else if(x==0 && y!=0)
    {
        printf("point lie on y axis");
    }
    else
    {
        printf("point lie on x axis");
    }
    return 0 ;
}