```
def mastermind(code, guess):
    black = sum(c1 == c2 and i == j for i, (c1,_) in enumerate(guess) for j,c2 in enumerate(code))
    white = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    return str(black) + "\n" + str(white)