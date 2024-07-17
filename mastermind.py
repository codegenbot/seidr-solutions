def mastermind(code, guess):
    white = sum([1 for c in zip(code, guess) if c[0] == c[1]])
    black = sum(1 for i in range(4) if code[i] == guess[i])
    return str(black), str(white)