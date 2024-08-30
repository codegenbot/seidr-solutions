def mastermind(code, guess):
    black = sum(
        c1 == c2 and i1 == i2
        for i1, c1 in enumerate(code)
        for i2, c2 in enumerate(guess)
    )
    white = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    return str(white - black), str(black)