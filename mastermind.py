```
def mastermind(code, guess):
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    black_pegs = 4 - white_pegs
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)