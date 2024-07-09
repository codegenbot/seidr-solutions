def mastermind(code, guess):
    white = sum(1 for c in code if c in guess) - len([c for c in code if code.count(c) and c == guess[guess.index(c)]])
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    return str(white), str(black)