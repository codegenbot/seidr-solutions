def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b and a != "B" and a != "O")
    black = sum(1 for a, b in zip(guess, code) if a == b and a in ["B", "O"])
    return str(white), str(black)