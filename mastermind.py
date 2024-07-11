```
def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    seen_chars = set()
    
    for c1, g1 in zip(code, guess):
        if c1 == g1:
            black_pegs += 1
        elif g1 in seen_chars:
            white_pegs += 1
        else:
            seen_chars.add(g1)
            
    return black_pegs, white_pegs