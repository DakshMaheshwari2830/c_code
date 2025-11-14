#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int weight;
    float bmi,height;
    printf("Enter the weight:");
    scanf("%d",&weight);
    printf("Enter the height:");
    scanf("%f",&height);
    height=height/100.0;
    bmi=weight/pow(height,2);
    if (bmi<15)
    {
        printf("starvation");
    }
    else if(bmi>=15.1&&bmi<=17.5){
        printf("Anorexic");
    }
    else if(bmi>=17.6&&bmi<=18.5){
        printf("Underweight");
    }
    else if(bmi>=18.6&&bmi<=24.9){
        printf("Ideal");
    }
    else if(bmi>=25&&bmi<=29.9){
        printf("Overweight");
    }
    else if(bmi>=30&&bmi<=39.9){
        printf("Obese");
    }
    else{
        printf("Morbidly obese");
    }
    
    
    
    
    
    return 0;
}