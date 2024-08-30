def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    white = len([a for a in code if a in guess]) - black
    return str(white), str(black)