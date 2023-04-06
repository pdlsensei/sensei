#include<stdio.h>
int main(){
    int i;
    printf("Enter your yearly income in l for lakhs and t for thousand=");
    scanf("%d",&i);
    if(i<2l){
        printf("There is no Tax");
    } else if (i>=2l & i<5l){
    printf("Tax is 5%");
    }else if(i>=5l & i<10l){
        printf("Tax is 20%");
    } else if(i>=10l){
        printf("Tax is 30% ");
    }else {
        printf("No tax");
    }
    
    return 0;
}