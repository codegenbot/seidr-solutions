def mastermind(code, guess):
    code = [c for c in code]
    white = sum([1 for c1, c2 in zip(guess, code) if c1 == c2 and c1 != "R"])
    black = sum([1 for c1, c2 in zip(guess, code) if c1 == c2])
    return str(4 - black), str(black)