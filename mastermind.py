```
def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "0\n0"

    for c in code + guess:
        if c not in "ARBYG":
            return "0\n0"

    white_pegs = sum(1 for c, g in zip(code, guess) if c == g and c != guess[guess.index(c)])
    black_pegs = 4 - sum(1 for c in code if c in guess) + sum(1 for c, g in zip(code, guess) if c == g)

    return "{}\n{}".format(str(black_pegs), str(white_pegs))