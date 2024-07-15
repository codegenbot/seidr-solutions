```
def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(1 for x in guess if x in code and guess.index(x) != code.index(x))
    return str(black) + "\n" + str(max(0, 4 - black))