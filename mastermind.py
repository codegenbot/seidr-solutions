def mastermind(code, guess):
    blacks = sum([1 for a,b in zip(guess, code) if a==b])
    whites = len(set(guess) & set(code)) - blacks
    return str(blacks), str(whites)