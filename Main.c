#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator using current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses =0;
    int Guessed_number;

    // Print the random number
    do
    {
        /* code */
        printf("Guess the number");
        scanf("%d", &Guessed_number);
        if (Guessed_number>randomNumber){
            printf("Lower number please!\n");

        }
        else if(Guessed_number<randomNumber){
            printf("Higher number please!\n");

        }
        else{
            printf("Congrats!!\n");
        }
            no_of_guesses++;
    
    } 
    while (Guessed_number !=randomNumber);
    printf("You Guessed the number in %d Guessed_number ",no_of_guesses);
    
   printf("Random number between 1 and 100: %d\n", randomNumber);

    return 0;
}
