def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    for c in set(guess):  
        if c == code.count(c) == guess.count(c):  
            black_pegs += 1
        else:  
            white_pegs += min(code.count(c), guess.count(c)) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)