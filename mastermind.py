# Modified version of the program that accepts interactive input from the user:

import re

def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1
    return (white_pegs, black_pegs)

# Get input from user interactively
code = input("Enter Mastermind code: ")
guess = input("Enter guess: ")

# Call mastermind function with input
result = mastermind(code, guess)

print(f"White pegs: {result[0]}, Black pegs: {result[1]}")