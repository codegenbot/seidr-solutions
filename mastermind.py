def mastermind(code, guess):
    white = sum(c in code for c in guess)
    black = sum(1 for i in range(4) if code[i] == guess[i])
    return str(black), str(white)