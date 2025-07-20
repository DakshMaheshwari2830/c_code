//If cost price and selling price of an item are input through the keyboard,write a progam to determine whether the seller has made profit or loss.
#include <stdio.h>;
int main(){
    int cp,sp;
    printf("Enter the value of cp,sp\n");
    scanf("%d,%d",&cp,&sp);
    if(sp>cp)
        printf("profit\n");
    else if(cp==sp)
        printf("no profit and no loss");
    else(printf("loss\n"));
    return 0;}