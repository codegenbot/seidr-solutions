def mastermind(code, guess):
    white = sum([1 for a, b in zip(guess, code) if a == b and a != "B"])
    black = sum([1 for a, b in zip(sorted(guess), sorted(code)) if a == b and a != "0"])
    return str(white) + "\n" + str(black)