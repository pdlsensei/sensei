#include<stdio.h>
int main(){
    int ch;
    printf("Enter a Character =");
    scanf("%c", &ch);
    if (ch>= 'a' && ch<= 'z') {
        printf("The charcter is Lowercase");
    } else if(ch>= 'A' && ch<= 'Z') {
        printf("The character is Uppercase");
    } else  {
        printf("Provided input is not a character");
    }
    return 0;
}