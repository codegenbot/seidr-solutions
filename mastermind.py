def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    for c in code + guess:
        if c not in "Royo":
            return "00"

    white = sum(1 for d in set(guess) if d in code and d != guess[guess.index(d)])
    black = sum(1 for i, (c, d) in enumerate(zip(code, guess)) if c == d)

    return str(white) + str(black)