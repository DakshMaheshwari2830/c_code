#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("Enter the lenght:");
    scanf("%d",&length);
    printf("Enter the breadth:");
    scanf("%d",&breadth);
    area= length * breadth;
    perimeter=2 * (length+breadth);
    if(area>perimeter)
    {
        printf("Area is greater than perimeter");
        
    }
    else
    {
        printf("Area is not greater than perimeter");
    }
    
    
    return 0 ;
}