def mastermind(code, guess):
    blacks = sum([a == b for a,b in zip(guess, code)])
    total_common = sum([1 for a,b in zip(guess, code) if a!=b and a in code])
    whites = total_common - blacks
    return str(blacks), str(whites)