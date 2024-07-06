```
def mastermind(code, guess):
    black = sum(1 for i in range(4) if code[i] == guess[i])
    white = sum(min(c, g) for c, g in zip([code.count(d) for d in set(code)], [guess.count(d) for d in set(guess)])) - black
    return black, white