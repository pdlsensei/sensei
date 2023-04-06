#include<stdio.h>
int main(){
   char a;
    printf("Enter your grade:");
    scanf("%c",&a);
    switch(a)
    { case 'A':
    printf("Excellent");
    break;
    case 'B':
    printf("Good");
    break;
    case 'C':
    printf("Well done");
    break;
    case 'D':
    printf("Try again");
    break;
    default:
    printf("Invalid grade ");

    }
    return 0;
}