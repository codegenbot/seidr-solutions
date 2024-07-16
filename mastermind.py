def mastermind(code, guess):
    blacks = sum([a == b for a,b in zip(guess, code)])
    whites = sum(1 for a,b in zip(guess, code) if a==b) - len(blacks)
    return str(blacks), str(whites)