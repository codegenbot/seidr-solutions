import re


def mastermind():
    # Initialize variables to keep track of white and black pegs
    white_pegs = 0
    black_pegs = 0

    # Read input from the user
    code, guess = input("Enter the Mastermind code and guess: ").split()

    # Iterate through each character in the code and guess
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1

    # Return the number of white and black pegs
    return (white_pegs, black_pegs)