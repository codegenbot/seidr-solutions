```
def mastermind(code, guess):
    white_pegs = sum(min(count, guess.count(c)) for c, count in zip("OOYYBB", [code.count(c) for c in "OOYYBB"]))
    black_pegs = sum(1 for c in code if c == g)
    return str(black_pegs), str(white_pegs)