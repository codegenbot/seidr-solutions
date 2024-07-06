import re


def mastermind():
    # Prompt the user for the code and guess
    code = input("Enter the Mastermind code: ")
    guess = input("Enter your guess: ")

    # Initialize variables to keep track of white and black pegs
    white_pegs = 0
    black_pegs = 0

    # Iterate through each character in the code and guess
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1

    # Return the number of white and black pegs
    return (white_pegs, black_pegs)