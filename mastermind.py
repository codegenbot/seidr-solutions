def mastermind(code, guess):
    black = sum(1 for i, c in enumerate(guess) if c == code[i])
    white = len(set(code) & set(guess)) - black
    return str(black), str(white)