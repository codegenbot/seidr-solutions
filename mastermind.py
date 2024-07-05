color_freq = {c: code.count(c) + guess.count(c) for c in set(code)}
white_pegs = sum(1 for c, g in zip(code, guess) if c == g and color_freq[c] > 0)
black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
return str(black_pegs), str(len(code)-len(set(code))-white_pegs)