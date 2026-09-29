#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 20 + 1;

    printf("Guess a number between 1 and 20: ");

    while (guess != number) {
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high!\n");
        }
        else if (guess < number) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations!\n");
            printf("Attempts: %d\n", attempts);
        }

        if (guess != number) {
            printf("Try again: ");
        }
    }

    return 0;
}