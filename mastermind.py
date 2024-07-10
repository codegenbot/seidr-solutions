def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    white_pegs = sum(1 for c, g in zip(code, guess) if c == g and c != guess[0])
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g and c == code[0])
    return str(white_pegs), str(black_pegs)