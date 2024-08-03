def mastermind(code, guess):
    black = sum(1 for c in zip(code, guess) if c[0] == c[1])
    white = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    return str(black) + "\n" + str(4 - black + white)