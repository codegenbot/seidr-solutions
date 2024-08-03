def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        [
            c1 == c2 and code.index(c1) < i
            for i, (c1, c2) in enumerate(zip(code, guess))
        ].count(True)
    )
    return str(black), str(white)