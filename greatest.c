#include<stdio.h>
#include<math.h>

int main(){
    int n1;
    int n2;
    int n3;
    printf("Enter number first");
    scanf("%d",&n1);
    printf("Enter the number 2nd");
    scanf("%d", &n2);
    printf("Enter the third number");
    scanf("%d", &n3);
    if(n1>=n2 && n1>=n3){
        printf("The greatest number is %d \n", n1);
    } else if(n2>=n1 && n2>=n3){
        printf("The greatest number is %d \n",n2);
    } else{
        printf("The greatest number is %d \n",n3);
    }
    return 0;
}