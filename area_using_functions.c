#include <stdio.h>
#include<math.h>
float squareArea( float side );
float circlearea(float  rad);
float rectanglearea(float a,float b);

int main() {
    float a=5.0;
    float b=5.0;
    printf("Area of rectangle is %.2f",rectanglearea(a,b));
    

    return 0;
}
float sqaurearea(float 
side){
    return side*side;
}
float circlearea(float  rad){
    return 3.14*rad *rad;
}
float rectanglearea(float a,float b){
    return a*b;
}