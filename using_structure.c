#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};


int main(){
    struct student s1;
    s1.roll = 12;
    s1.cgpa=7.5;
  strcpy(s1.name,"Daksh");
    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    printf("%s\n",s1.name);
    
    
    struct student s2;
    s2.roll=13;
    s2.cgpa=7.2;
    strcpy(s2.name,"Tanvi");
    printf("%d\n",s2.roll);
    printf("%f\n",s2.cgpa);
    printf("%s\n",s2.name);
    return 0;
    
}