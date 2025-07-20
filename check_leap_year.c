//Any year is input by the user. The program checks whether the year is a leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year%4==0)
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");
    return 0;
}