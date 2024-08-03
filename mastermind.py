def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(
        a == b and i != j for (i, a), (j, b) in zip(range(4), code) if a == guess[i]
    )
    return str(black) + "\n" + str(white)