def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = len([c for c in code if c in guess and code.count(c) > 1])
    return f"{blacks} {whites}"