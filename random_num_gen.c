#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// program to generate random number between 1 to 100
int main(){
    int number;
    srand(time(0));
    number = rand()%100 + 1; //generates a number between 1 to 100
    printf("The number is %d",number);
    
    return 0;
}