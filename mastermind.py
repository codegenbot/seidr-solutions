```
def mastermind(code, guess):
    black = sum(1 for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess)) if c1 == c2)
    white = len([c for c in guess if c in code and c != code[guess.index(c)]])
    return str(black) + "\n" + str(len(code) - black - white)