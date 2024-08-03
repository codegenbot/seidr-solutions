def mastermind(code, guess):
    white = sum(1 for c in zip(guess, code) if c[0] == c[1])
    black = sum(min(map(c.count, code)) for c in [code, guess]) - white
    return str(black), str(white)