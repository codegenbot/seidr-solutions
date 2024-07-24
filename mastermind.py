```
def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    
    for c1, c2 in zip(code, guess):
        if c1 == c2:
            if code.index(c1) == guess.index(c2):
                black_pegs += 1
            else:
                white_pegs += 1
                
    return black_pegs, white_pegs