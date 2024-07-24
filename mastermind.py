def mastermind(code, guess):
    white = sum(1 for c in zip(code, guess) if c[0] == c[1])
    black = sum(min(map(lambda x: 1 if x[0] == x[1] else 0, zip(code[i::4], guess[i::4])))) for i in range(4))
    return str(black), str(white)