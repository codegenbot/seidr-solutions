def mastermind(code, guess):
    white = sum(1 for c, g in zip(code, guess) if c == g)
    black = len(
        [c for c, g in zip(code, guess) if c == g and code.index(c) == guess.index(g)]
    )
    return str(black) + "\n" + str(4 - black)