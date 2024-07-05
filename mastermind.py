def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum((code.count(g) if c == g else guess.count(c)) for c, g in zip(code, guess) if c != g)
    return str(white_pegs), str(black_pegs)