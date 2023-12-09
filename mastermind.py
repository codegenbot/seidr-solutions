import collections

def mastermind():
    code = input()
    guess = input()

    white_pegs = sum((collections.Counter(code) & collections.Counter(guess)).values()) - \
                 sum(c == g for c, g in zip(code, guess))
    black_pegs = sum(c == g for c, g in zip(code, guess))

    return white_pegs, black_pegs

print(mastermind())