```
from collections import Counter

def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    code_freq = Counter(code)
    guess_freq = Counter(guess)

    black = sum(1 for c in code if c in guess_freq and c == code[i] for i in range(len(code)))

    return str(white), str(black)