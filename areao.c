#include<stdio.h>
float printarea(float r);
int main (){
    float r;
    printf("Enter the radius of a circle :");
    scanf("%f", &r);
     
    printf("Area of a circle is :%f",printarea(r));

    return 0;
}

float printarea(float r){
    return r*r*3.14;
}