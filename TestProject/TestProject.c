#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;

    printf("Guess a number from 1-10: ");

    // Seed the random number generator
    srand(time(NULL));

    int min = 1, max = 10;
    int random = (rand() % (max - min + 1)) + min;

    // Read the user's guess
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Check the guess
    if (choice == random) {
        printf("Correct! The number was %d.\n", random);
    } else {
        printf("Wrong! The number was %d.\n", random);
    }

    return 0;
}
