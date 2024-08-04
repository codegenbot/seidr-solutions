def mastermind(code, guess):
    code_set = set(code)
    guess_set = set(guess)
    black_pegs = sum(c in code_set and c == g for c, g in zip(code, guess))
    white_pegs = len(code_set & guess_set) - black_pegs
    return str(white_pegs), str(black_pegs)