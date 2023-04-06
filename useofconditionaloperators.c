#include<stdio.h>
#include<math.h>
//Use of conditional condition? do something if true : do something if false
int main(){
    int age;
    printf("Enter age = ");
    scanf("%d", &age);
    age >=18? printf("Adult"): printf("Not adult");
    return 0;
}