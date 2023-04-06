#include<stdio.h>
int main(){
    int p,c,m;
    printf("Enter the marks of Physics= \n");
    scanf("%d", &p);
    printf("Enter the marks of chemistry= \n");
    scanf("%d", &c);
    printf("Enter the marks of maths=\n");
    scanf("%d",&m);
    int t;
    printf("Enter the percentage in whole=");
    scanf("%d", &t);
    if(p&c&m>=33 && t>=40){
        printf("You pass this year");
    } else {
        printf("You should repeat this year again");
    }
    return 0;
}