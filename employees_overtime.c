#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int i=1;
    int time_emp,overtime;
    while(i<=10){
        printf("enter the emp_hour:\n");
        scanf("%d",&time_emp);
        if(time_emp>40){
            overtime=(time_emp-40)*12;
            printf("%d\n",overtime);}
        else{
             printf("wrong input\n");
         }   
            
     i=i+1;
           
            
        }
        return 0;
    }