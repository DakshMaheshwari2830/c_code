#include <stdio.h>

int main() {
    int pin=1234;
   float amount,balance=1000.00;
   int entered_pin,new_pin,choice;
   printf("Enter the pin:");
   scanf("%d",&entered_pin);
   if(entered_pin!=pin){
       printf("You enter the wrong pin!Try Again");
       return 0;
   }
   else{
       printf("Correct Pin\n");
       
   }
   printf("Welcome to ATM\n");
   printf("Press 1 for balance check\n");
   printf("Press 2 for withdrawl cash\n");
   printf("Press 3 for reset pin\n");
   printf("Press 4 for exit\n");
   printf("Enter your choice:");
   scanf("%d",&choice);
   switch(choice){
       case 1:printf("Your balance is %f",balance);
       break;
       case 2:printf("Enter the withdrawl amount:\n");
              scanf("%f",&amount);
              if(amount>balance){
                  printf("Insufficient balance\n");
              }
              else if(amount<=0){
                  printf("Invalid amount!\n");
              }
              else{
                  balance=balance-amount;
                  printf("Collect your cash!\n");
                  printf("Your remaining balance is %f",balance);
              }
        break;
        case 3:printf("Enter the new pin:");
                scanf("%d",&new_pin);
                if(new_pin==pin){
                    printf("You cannot enter same pin again\n");
                
                }
                else{
                    pin=new_pin;
                    printf("Pin is successfully set!\n");
                }
        break;
        case 4:printf("Thanks for visiting\n");
        break;
        default:printf("Invalid input");}
        return 0;   }