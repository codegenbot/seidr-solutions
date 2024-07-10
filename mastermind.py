def mastermind(code, guess):
    white = sum(c in guess and c != guess[i] for i, c in enumerate(code))
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    return str(white), str(black)