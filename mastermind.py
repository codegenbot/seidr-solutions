def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(min(1 for c in code if c == x) for x in guess) - black
    return str(white), str(black)