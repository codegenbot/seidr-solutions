def mastermind(code, guess):
    black = sum(a == b for a, b in zip(code, guess))
    white = sum(min(code.count(c), guess.count(c)) for c in set(guess)) - black
    return str(white) + "\n" + str(black)