def mastermind(code, guess):
    black = sum([1 for c in zip(code, guess) if c[0] == c[1]])
    white = sum([1 for c in set(guess) if c in code and c != code[code.index(c)]])
    return str(white), str(black)