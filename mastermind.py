def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = len([g for g, c in zip(guess, code) if g != c and g in code]) - black_pegs
    return str(black_pegs), str(white_pegs)