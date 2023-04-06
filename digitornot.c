#include<stdio.h>
int main(){
    int ch;
    printf("Enter the character=");
    scanf("%c", &ch);
    if (ch>='0' && ch<='9'){
        printf("The character is Digit");
    } else if (ch>='a' && ch<='z') {
        printf("The character is not Digit");
    } else if (ch>='A' && ch<='Z'){
        printf("The character is not Digit");
    }

    return 0;
} 