def mastermind(code, guess):
    blacks = sum([a == b for a,b in zip(guess, code)])
    whites = len(guess) - blacks
    return str(blacks), str(whites)