import collections


def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)

    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1

    for color in code_count:
        if color in guess_count:
            white_pegs += min(code_count[color], guess_count[color])

    white_pegs -= black_pegs

    return white_pegs, black_pegs