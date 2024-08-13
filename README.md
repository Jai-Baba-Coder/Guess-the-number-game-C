# Guess the Number Game

## Overview

This is a simple console-based "Guess the Number" game written in C. The program generates a random number between 1 and 100, and the player tries to guess the number. The program provides feedback whether the guessed number is too high or too low and counts the number of attempts taken to guess the correct number.

## Features

- **Random Number Generation**: The program generates a random number between 1 and 100 at the start of the game.
- **User Input**: The player enters guesses until they correctly identify the number.
- **Feedback**: After each guess, the program provides feedback:
  - "Too high! Guess lower number"
  - "Too low! Guess higher number"
- **Attempts Counter**: The program keeps track of the number of attempts and displays it when the player guesses correctly.
- **Simple and Engaging**: Ideal for beginners to practice loops, conditionals, and random number generation in C.

## How to Run

1. **Compile the program** using a C compiler:
   ```bash
   gcc -o guess_the_number guess_the_number.c
   ```
2. **Run the compiled program**:
   ```bash
   ./guess_the_number
   ```
3. Follow the on-screen instructions to guess the number.

## Code Explanation

- **Random Number Generation**: 
  - The random number is generated using the `rand()` function seeded with the current time via `srand(time(0))`.
  - The number is restricted to the range 1-100 with the expression `(rand() % 100) + 1`.

- **User Interaction**:
  - The program prompts the user to enter a guess.
  - It checks whether the guess is too high, too low, or correct and provides feedback accordingly.

- **Loop and Conditionals**:
  - A `do-while` loop ensures the game continues until the correct number is guessed.
  - The number of guesses is tracked by the `guessNum` variable.

- **End of Game**:
  - Once the correct number is guessed, the program congratulates the player and displays the number of attempts taken.

## Example Run

```
=====GUESS THE NUMBER GAME=====
Enter your guess >> 50
Too high! Guess lower number
Enter your guess >> 25
Too low! Guess higher number
Enter your guess >> 37
Too high! Guess lower number
Enter your guess >> 30
Congrats! You guessed in 4 number of guesses
```

## Requirements

- A C compiler (e.g., GCC)
- Terminal or command line access

## Credits

Developed as a simple introduction to programming concepts in C, including loops, conditionals, and random number generation. Ideal for beginners looking to enhance their coding skills.

## License

This project is released under the MIT License. Feel free to modify and distribute the code as you see fit.
