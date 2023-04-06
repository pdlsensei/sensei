#include<stdio.h>
float printarea(float r);
int main(){
    float r;
    printf("Enter a Radius :");
    scanf("%f",&r);
    printarea(r);
    return 0;
}

float printarea(float r){
    printf("Area of a circle is:%f",3.14*r*r);
}