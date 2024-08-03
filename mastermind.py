def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum([1 for i, c in enumerate(code) if c == guess[i]])
    return str(white), str(black)