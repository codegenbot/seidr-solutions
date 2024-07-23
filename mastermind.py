```
def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = sum(1 for c in set(guess) if c in code and c != guess[guess.index(c)])
    return str(black_pegs) + "\n" + str(white_pegs)