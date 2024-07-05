def mastermind(code, guess):
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = 0
    for c in set(guess):  
        white_pegs += sum(1 for x in code if x == c) - black_pegs
    return str(black_pegs) + ' ' + str(white_pegs)