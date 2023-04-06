#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// program to generate random number between 1 to 100
int main(){
    int number;
    int guess;
    int guesses =1;
    srand(time(0));
    number = rand()%100 + 1; //generates a number between 1 to 100
    // keep running the loop until the number is guessed
    do{
         printf("Guess the number between 1 to 100");
         scanf("%d", &guess);
         if(guess>number){
            printf("Lower number please ! \n");
         } else if (guess<number){
            printf("Higher number please! \n");
         } else {
            printf("You guessed it in %d attempts \n", guesses);
         }
         guesses++;
    }while(guess!=number);
    return 0;
}