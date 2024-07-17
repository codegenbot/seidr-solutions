def mastermind(code, guess):
    white = sum(c in code and c != g for c, g in zip(guess, code))
    black = sum(
        (c == g) and (code.index(c) == i) for i, (c, g) in enumerate(zip(guess, code))
    )
    return str(black), str(white)