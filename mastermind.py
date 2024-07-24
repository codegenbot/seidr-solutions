def mastermind(code, guess):
    black = sum([a == b for a, b in zip(code, guess)].count(True))
    white = len([c for c in guess if c in code and c != code[code.index(c)]])
    return str(black) + "\n" + str(white)