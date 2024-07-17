def mastermind(code, guess):
    white = sum(1 for c in zip(guess, code) if c[0] == c[1])
    black = sum(
        sum(1 for i, x in enumerate(guess) if x == y and i != k)
        for k, y in enumerate(code)
    )
    return str(black), str(white)