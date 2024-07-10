def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for c in code:
        if c == guess[4-c.index(c)]:  
            black_pegs += 1
        elif code.count(c) > 0:      
            white_pegs += 1

    return str(black_pegs), str(white_pegs)