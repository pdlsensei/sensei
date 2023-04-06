#include<stdio.h>

void namaste();
void hello();

int main(){
    char ch;
    printf("Enter Your nationality n for nepali and a for american");
    scanf("%c", &ch);

    if (ch== 'n'){
        namaste();
    } else {
        hello();
    }
    return 0;
}

void namaste(){
    printf("Namaste \n");
}
void hello(){
    printf("Hello \n");
}