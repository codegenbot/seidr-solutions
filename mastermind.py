from collections import Counter

def mastermind(code, guess):
    code_count = Counter(code)
    guess_count = Counter(guess)

    black_pegs = sum((code_count & guess_count).values())
    white_pegs = len([c for c in guess if c in code]) - black_pegs
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)