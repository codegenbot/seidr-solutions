def mastermind(code, guess):
    black_pegs = sum(1 for i, j in zip(code, guess) if i == j)
    white_pegs = 4 - black_pegs
    for c in set(guess):
        white_pegs += min(code.count(c), guess.count(c)) - black_pegs
    
    return str(white_pegs), str(black_pegs)