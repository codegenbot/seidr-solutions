def mastermind(code, guess):
    white = sum(c in code for c in guess)
    black = sum(
        a == b and i == j for i, a in enumerate(code) for j, b in enumerate(guess)
    )
    return str(white), str(black)