def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    for c1, c2 in zip(code, guess):
        if c1 == c2:
            black_pegs += 1
        elif c2 in code:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)