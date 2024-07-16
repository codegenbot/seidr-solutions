def mastermind(code, guess):
    matches = sum((c1 == c2) for c1, c2 in zip(code, guess))
    black = matches - sum(c in code for c in set(guess) if c in code)
    return str(matches - black), str(black)