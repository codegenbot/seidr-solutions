def mastermind(code, guess):
    white = sum((c in guess) for c in code) - (code.count(c) and c == guess[guess.index(c)])
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    return str(white), str(black)