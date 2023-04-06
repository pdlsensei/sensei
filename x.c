#include<stdio.h>
int main(){
    int n;
    int f=1;
    printf("Enter a number to find factorial");
    scanf("%d",&n);
    for(int i=n; i>=1 ; i--){
        f= f*i;
    }
    printf("Factorial of given number is %d \n",f);
    return 0;
}