```
def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "0\n0"

    for c in code + guess:
        if c not in "ARBYG":
            return "0\n0"

    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = len(guess) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)