def mastermind(code, guess):
    black = sum(c1 == c2 for c1, c2 in zip(code, guess) if c1 == c2)
    white = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    return str(white), str(black)