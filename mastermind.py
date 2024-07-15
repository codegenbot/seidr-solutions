```
def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = len([x for x in set(guess) if x in code and x != [a for a, b in zip(guess, code) if a == b][0]]) - black
    return str(black) + "\n" + str(max(0, 4 - black))