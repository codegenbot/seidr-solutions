def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = 4 - (blacks + sum(1 for c, g in zip(code, guess) if c != g))
    return f"{blacks} {whites}"