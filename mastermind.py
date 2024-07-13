def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = sum(1 for c in code if c in guess and c != guess[guess.index(c)])
    return f"{blacks} {whites}"