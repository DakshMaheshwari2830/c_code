#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={25,7.5,"Daksh"};
    printf("%d",s1.roll);
    
    struct student *ptr=&s1;
    
    printf("%d",(*ptr).roll);
    printf("%d",ptr->roll);
    
    return 0;
}