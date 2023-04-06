#include<stdio.h>
#include<math.h>
void printmeasurement(float a);
int main(){
  float a;
  float b;
  printf("Enter a measurement in inch:");
  scanf("%f", &a);
  printmeasurement(a);

  return 0;
}
void printmeasurement(float a){
  printf("The measurement in metre is:%f",(a*2.54)/100);
}
