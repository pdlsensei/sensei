#include<stdio.h>
//declaration/prototype
void printhello();

int main(){
    printhello();  //fuction call
    printhello();
    printhello();
    printhello();
    return 0;
}

//function defination
void printhello(){
    printf("Hello!\n");
}