def mastermind(code, guess):
    white = sum(c in code for c in guess) - sum(code[i] == guess[i] for i in range(4))
    black = sum(code[i] == guess[i] for i in range(4))
    return str(black), str(white)