def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    return str(blacks), str(whites)