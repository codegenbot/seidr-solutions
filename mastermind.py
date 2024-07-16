def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = len(set(guess).intersection(set(code))) - black
    return str(min(4, white)), str(black)