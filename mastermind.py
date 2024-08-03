def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        all(c1 == c2 and i != j for i, c1 in enumerate(guess))
        for j, c2 in enumerate(code)
    )
    return str(white), str(black)