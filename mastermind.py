def mastermind(code, guess):
    blacks = sum([a == b for a,b in zip(guess, code)])
    whites = len([a for a,b in zip(guess, code) if a==b]) - len(blacks)
    return str(len(blacks)), str(whites)