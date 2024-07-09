```
def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess) if code.count(c) > 0)
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)