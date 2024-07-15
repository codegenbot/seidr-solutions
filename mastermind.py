```
def mastermind(code, guess):
    white = sum(1 for c1, c2 in zip(guess, code) if c1 != c2 and c1 in code)
    black = sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    return str(black) + "\n" + str(white)