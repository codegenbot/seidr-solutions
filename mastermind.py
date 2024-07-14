def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    for c in code + guess:
        if c not in "Royo":
            return "00"

    white = sum(1 for d in guess if d in code and d != code[code.index(d)])
    black = sum(1 for i, (c, d) in enumerate(zip(code, guess)) if c == d)

    return str(white) + str(black)