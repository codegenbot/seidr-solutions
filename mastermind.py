import collections

def mastermind():
    code = input()
    guess = input()

    black_pegs = sum(c == g for c, g in zip(code, guess))
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    code_counts &= guess_counts
    white_pegs = sum(min(count, guess_counts[char]) for char, count in code_counts.items()) - black_pegs

    return white_pegs, black_pegs

print(mastermind())