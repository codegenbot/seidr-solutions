def mastermind(code, guess):
    white = sum(1 for c in zip(guess, code) if c[0] == c[1])
    black = sum(1 for x in set(zip(guess, code)) if list(x).count(list(x)[0]) == 2)
    return str(black), str(white)