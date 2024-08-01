def get_pegs(code, guess):
    white = sum(c in code and c != g for c, g in zip(guess, code))
    black = sum(g in code and g == c for c, g in zip(guess, code))
    return str(white), str(black)