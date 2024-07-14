def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    for c in code + guess:
        if c not in "Royo":
            return "00"

    white = 0
    black = 0

    for i, (c, d) in enumerate(zip(code, guess)):
        if c == d:
            black += 1
        elif d in code and d != c:
            white += 1

    return str(white) + str(black)