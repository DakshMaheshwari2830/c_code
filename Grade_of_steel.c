#include <stdio.h>

int main() {
  int hardness,tensile_strenght;
  float carbon_content;
  printf("Enter the hardness:");
  scanf("%d",&hardness);
  printf("Enter the carbon_content:");
  scanf("%f",&carbon_content);
  printf("Enter the tensile_strength:");
  scanf("%d",&tensile_strenght);
   
  if(hardness> 50 && carbon_content<0.7&&tensile_strenght>5600)
  {
      printf("Grade is 10");
  }
  else if(hardness> 50 && carbon_content<0.7)
  {
      printf("Grade is 9");
  }
    else if(tensile_strenght>5600 && carbon_content<0.7)
  {
      printf("Grade is 8");
  }
  else if(hardness> 50&&tensile_strenght>5600  )
  {
      printf("Grade is 7");
  }
  else if(tensile_strenght>5600||hardness> 50 ||carbon_content<0.7)
  {
      printf("Grade is 6");
  }
  else{
      printf("Grade is 5");
  }
   
    
    
    return 0;}