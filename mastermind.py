def mastermind(code, guess):
    blacks = sum([a == b for a,b in zip(guess, code)])
    whites = len([a for a,b in zip(guess, code) if a!=b and a in code]) - blacks
    return str(blacks), str(whites)