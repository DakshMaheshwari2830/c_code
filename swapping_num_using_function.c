#include <stdio.h>
int swap(int *,int *);

int main() {
    int a,b;
    printf("Enter a,b:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\ after swapping a=%d b=%d",a,b);
   

    return 0;
}
int swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\n after swaaping a=%d y=%d",*x,*y);
}