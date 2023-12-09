import collections

def mastermind():
    code = input()
    guess = input()

    white_pegs = sum((min(code.count(c), guess.count(c)) for c in set(guess)))
    black_pegs = sum(c == g for c, g in zip(code, guess))

    return white_pegs, black_pegs

print(mastermind())