def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    for c1, c2 in zip(code, guess):
        if c1 == c2:  
            black_pegs += 1
        elif c1 in c2 or c2 in c1:  
            white_pegs += min(c1.count(c2), c2.count(c1))
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)