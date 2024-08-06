def mastermind(code, guess):
    black_pegs = sum([1 for i in range(4) if code[i] == guess[i]])
    white_pegs = 4 - black_pegs
    return str(black_pegs), str(white_pegs)