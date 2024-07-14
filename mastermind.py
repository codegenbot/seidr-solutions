```
def mastermind(code, guess):
    white = sum(1 for c in zip(code, guess) if c[0] == c[1] and c[0] != c[1])
    black = len([c for i, c in enumerate(guess) if c == code[i]])
    return str(black), str(max(0, 4 - black + white))