def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    black_pegs = sum(1 for c in zip(code, guess) if c[0] == c[1])
    white_pegs = 4 - black_pegs
    return str(white_pegs), str(black_pegs)