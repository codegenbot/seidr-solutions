def mastermind(code, guess):
    white = sum(c in code and c != guess[i] for i, c in enumerate(guess))
    black = sum(1 for i, c in enumerate(guess) if c == code[i])
    return str(black), str(white)