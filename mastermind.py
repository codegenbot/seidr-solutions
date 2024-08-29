Here is the solution:

def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(code, guess)) - sum((code.count(c) == 1 and guess.count(c)) for c in set(code))
    black = sum((c1 == c2 and code.index(c1) == i) for i, (c1, c2) in enumerate(zip(code, guess)))
    return str(white), str(black)