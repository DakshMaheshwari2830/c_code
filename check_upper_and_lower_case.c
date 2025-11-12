
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("The character is in upper case.\n");
    } else if(ch>='a' && ch<='z'){
        printf("The character is in small case.\n");
    } else {
        printf("The character is neither in upper case nor in small case.\n");
    }
    return 0;
}