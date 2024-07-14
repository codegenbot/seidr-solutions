def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    for c in code + guess:
        if c not in " ABCDEF":
            return "00"

    white = sum(1 for c, d in zip(code, guess) if c == d)
    black = sum((c == d and code.index(c) == i) for i, (c, d) in enumerate(zip(code, guess))).count(True)

    return str(white) + '0', str(black)