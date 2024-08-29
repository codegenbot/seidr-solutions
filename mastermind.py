def mastermind(code, guess):
    black = sum(code[i] == guess[i] for i in range(4))
    white = 4 - black
    return str(black), str(white)