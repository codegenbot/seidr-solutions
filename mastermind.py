def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b)
    black = len([a for a, b in zip(guess, code) if a == b and a != code[0]])
    return str(black), str(white)