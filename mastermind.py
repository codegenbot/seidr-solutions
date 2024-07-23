```
def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    for c1, c2 in zip(code, guess):
        if c1 == c2:  
            black_pegs += 1
        elif str(c1) in str(c2) or str(c2) in str(c1):  
            white_pegs += min(str(c1).count(str(c2)), str(c2).count(str(c1)))
    
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)