import collections

def mastermind():
    code = input()
    guess = input()

    code_counter = collections.Counter(code)
    guess_counter = collections.Counter(guess)
    white_pegs = sum(min(code_counter[key], guess_counter[key]) for key in code_counter)
    black_pegs = sum(c == g for c, g in zip(code, guess))

    return white_pegs, black_pegs
print(mastermind())