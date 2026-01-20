//if we have to nput a multiple words we cant use scanf there we use fgets and puts//
#include<stdio.h>
int main(){
    char fullname[100];
    scanf("%s",fullname);
    fgets(fullname,100,stdin);
    puts(fullname);
    return 0;
}




#include<stdio.h>
int countlength(char arr[]);
int main(){
char name[100];
fgets(name,100,stdin);

printf("Your lenght is %d",countlength(name));
return 0;}

int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}