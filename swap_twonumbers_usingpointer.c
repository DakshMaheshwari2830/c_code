#include<stdio.h>
void _swap(int *a,int *b);
int main(){
    int x=3;
    int y=5;
    _swap(&x,&y);
    printf("x=%d,y=%d",x,y);
    return 0;
}
void _swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}