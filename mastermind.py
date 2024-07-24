def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        [
            a == b and code.index(a) < i for i, (a, b) in enumerate(zip(code, guess))
        ].count(True)
    )
    return str(white), str(black)