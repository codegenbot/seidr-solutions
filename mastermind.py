def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b and a != "A")
    black = sum(1 for a in set(guess) if list(guess).count(a) == list(code).count(a))
    return str(white), str(black)