```
def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    for c in code + guess:
        if c not in " ABCDEF":
            return "00"

    white = sum(1 for c, d in zip(code, guess) if c == d)
    black = sum(1 for c, i in enumerate(code) if c == guess[i])

    return str(white) + "0" + str(black)