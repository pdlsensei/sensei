#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks =");
    scanf("%d", &marks);
    if(marks>=0 && marks<30) {
        printf("You get C ");
    } else if (marks>=30 && marks<70) {
        printf("You get B ");
    } else if (marks>=70 && marks<90){
        printf("You get A");
    } else if (marks>=90 && marks<=100){
        printf("You get A+  ");
    }
    return 0;
}