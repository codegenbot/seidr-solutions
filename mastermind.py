```
def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = len([x for x in set(guess) & set(code)])
    return str(black) + "\n" + str(4 - black + white)