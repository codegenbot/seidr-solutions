def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        c == d and pos1 != pos2
        for c, pos1 in enumerate(guess)
        for d, pos2 in enumerate(code)
    )
    return str(white), str(black)