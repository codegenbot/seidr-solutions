```
def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "000"

    for c in code + guess:
        if c not in " ABCDEF":
            return "000"

    white = sum(1 for c, d in zip(code, guess) if c == d)
    black = sum((c == d and code.index(c) == i) for i, (c, d) in enumerate(zip(code, guess))).count(True)

    return str(white), str(black)