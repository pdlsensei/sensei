#include<stdio.h>
void printarea(float r);
float r;
int main(){
   float r;
    printf("Radius of a circle:");
    scanf("%f", &r);
    printarea( r);
    return 0;
}

void printarea(float r) {
    printf("Area of a circle:%f",3.14*r*r);

}