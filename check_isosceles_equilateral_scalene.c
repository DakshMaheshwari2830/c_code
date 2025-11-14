#include <stdio.h>

int main() {
  int a,b,c,sum_of_two_sides;
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("Enter the value of b:");
  scanf("%d",&b);
  printf("Enter the value of c:");
  scanf("%d",&c);
  if(a==b&&b==c)
  {
      printf("The triangle is equilateral");
  }
  else if(a==b||b==c||c==a)
  {
      printf("The triangle is isoceles");
  }
  
  
  else if(c*c == a*a + b*b){
      printf("The triangle is right angeled triangle");
  }
  else
  {
      printf("The triangle is scalene");
  }
  
  return 0;}