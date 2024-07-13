def mastermind(code, guess):
    black_peg = 0
    white_peg = 0

    for c in set(guess):  
        b = min((code.count(c), guess.count(c)))  
        if code.count(c) == b:  
            black_peg += b
        else:  
            white_peg += b - code.count(c)

    return str(black_peg), str(white_peg)