//Write a program to check whether  a triangle is valid or not when the angles of three sides are given.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the angles of the traingles\n");
    scanf("%d,%d,%d,&a,&b,&c");
    if (a+b+c==180 ){
        printf("The triangle is valid\n");
    } else {
        printf("The triangle is not valid\n");
    }
    return 0;
    
}