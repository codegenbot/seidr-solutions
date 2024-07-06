import re


def mastermind(code, guess):
    if not re.match("[0-5]{4}", code) or not re.match("[0-5]{4}", guess):
        return ("Invalid input", "Invalid input")

    white_pegs = 0
    black_pegs = 0

    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1

    return (white_pegs, black_pegs)