def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        [
            c1 == c2 and i < j
            for i, (c1, _) in enumerate(guess)
            for j, (_, c2) in enumerate(code)
        ]
    )
    return str(white), str(black)