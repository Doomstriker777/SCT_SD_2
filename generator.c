#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, userGuess;

    // Seed random number generator
    srand(time(0));
    secretNumber = (rand() % 20) + 1;  // Random number between 1 and 20

    printf("Welcome to the Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20.\n");

    printf("Enter your guess: ");
    scanf("%d", &userGuess);

    if (userGuess == secretNumber) {
        printf("Congratulations! You guessed it right.\n");
    } else {
        printf("Oops! The correct number was %d. Better luck next time!\n", secretNumber);
    }

    return 0;
}
