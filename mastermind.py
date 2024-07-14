def mastermind(code, guess):
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    white_pegs = sum(1 for c in set(guess) if c in code and c != guess[guess.index(c)])
    
    return str(black_pegs) + "\n" + str(white_pegs)