import collections


def mastermind(code, guess):
    black_pegs = sum(c == g for c, g in zip(code, guess))
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    white_pegs = (
        sum(min(code_count[c], guess_count[c]) for c in code_count) - black_pegs
    )
    return white_pegs, black_pegs


code = input()
guess = input()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)