def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b and a != "B")
    black = sum(1 for a, b in zip(guess, code) if a == b)
    return str(white), str(black)