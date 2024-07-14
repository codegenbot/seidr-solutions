def mastermind(code, guess):
    white = sum(c in guess for c in code) if sum(c in guess for c in code) > 0 else 0
    black = sum(1 for c1, c2 in zip(guess.count(c) for c in code) if c1 == len(list(c2)) and c1 > 0)
    return str(white), str(black)