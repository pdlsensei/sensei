#include<stdio.h>
#include<math.h>
// This code is a use of if else statement.
int main(){
    int age;
    printf("Enter age = ");
    scanf("%d", &age);

    if (age >=18) {
        printf(" He is a adult \n");
        printf(" He can drive. \n");
        printf(" He can go aboard \n");
        
    }
    else { 
        printf(" He is a child \n");
    }
    return 0;
}