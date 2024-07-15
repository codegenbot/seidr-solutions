def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    white = len([x for x in guess if x in code and code.index(x)!=guess.index(x)])
    return str(black) + "\n" + str(white)