import collections

def mastermind():
    code = input("Enter the code: ")
    guess = input("Enter the guess: ")

    black_pegs = sum(c == g for c, g in zip(code, guess))
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    code_counts &= guess_counts
    white_pegs = sum(code_counts.values()) - black_pegs

    return white_pegs, black_pegs

print(mastermind())