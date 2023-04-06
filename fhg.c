#include<stdio.h>
int main(){
    int n;
    int table;
    int sum;
    printf("Enter a number=");
    scanf("%d", &n);
    for(int i=1; i<=10 ; i++){
        table=i*n;
        sum=sum + table;
    }
    printf("The sum of multiplication table of provided number is %d \n",sum);
     return 0;
}