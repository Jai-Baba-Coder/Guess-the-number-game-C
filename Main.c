#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;

    printf("=====GUESS THE NUMBER GAME=====\n");
    int guessNum = 0;
    int n;

    do {
        printf("Enter your guess >> ");
        scanf("%d", &n);

        if(n > randomNumber) printf("Too high! Guess lower number\n");
        else if(n < randomNumber) printf("Too low! Guess higher number\n");

        guessNum++;
    } while(n != randomNumber);

    printf("Congrats! You guessed in %d number of guesses", guessNum);

    return 0;
}