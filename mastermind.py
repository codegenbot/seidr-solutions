def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        (c1 == c2) and (guess.index(c1) != i)
        for i, c1 in enumerate(guess)
        for c2 in code
    ).count(True)
    return str(white), str(black)