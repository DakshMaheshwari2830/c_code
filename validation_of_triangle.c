#include <stdio.h>

int main() {
  int a,b,c,sum_of_two_sides;
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("Enter the value of b:");
  scanf("%d",&b);
  printf("Enter the value of c:");
  scanf("%d",&c);
  sum_of_two_sides=a+b;
  if(sum_of_two_sides>c)
    {printf("The triangle is valid");}
  else{
      printf("The triangle is not valid");
  }
  return 0;}