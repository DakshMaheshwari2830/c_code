#include <stdio.h>
int main(){
    int d1,d2,d3,d4,d5;
    printf("enter the values of d1,d2,d3,d4,d5\n");
    scanf("%d %d %d %d %d",&d1,&d2,&d3,&d4,&d5);
    int sum;
    sum = d1 + d2 + d3 + d4 + d5;
    printf("The sum of the 5 digits is %d\n",sum);
    return 0;
}
