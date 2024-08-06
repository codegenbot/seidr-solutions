def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum(min(c.count(g), g.count(c)) for c, g in zip(code, guess))
    return f"{black_pegs}\n{4 - black_pegs - white_pegs}"