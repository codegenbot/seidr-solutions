def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b and a not in "BO")
    black = sum(1 for a, b in zip(guess, code) if a == b and a in "BO")
    return str(white), str(black)