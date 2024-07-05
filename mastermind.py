def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    color_freq = {c: code.count(c) + guess.count(c) for c in set(code)}
    white_pegs = sum(1 for c, g in zip(code, guess) if c != g and color_freq[c] > 0)
    return str(white_pegs), str(black_pegs)