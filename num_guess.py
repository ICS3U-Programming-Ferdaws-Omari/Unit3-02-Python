#!/usr/bin/env python3

# Created by: Ferdaws
# Created on: March 2022
# This program checks if there is over 30 students


import constants


def main():
    # This function checks what number the user guesses.

    # input
    number_given = int(input("Insert a number between 0-9: "))
    print("")

    # This compares the number guessed to the number
    # I chose and display if they got it right or wrong.
    if number_given == constants.RIGHT_NUMBER:
        print("You guessed correctly!")

    if number_given != constants.RIGHT_NUMBER:
        print("You guessed wrong")


if __name__ == "__main__":
    main()
