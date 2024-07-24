```
def mastermind(code, guess):
    white = sum(c in code for c in guess) - len([c for c in code if c == g and guess.index(c) < i][::-1] for g, i in zip(guess, [i for i, x in enumerate(guess) if x in code])[::-1])
    black = sum((c1 == c2) for c1, c2 in zip(code, guess))
    return str(white), str(black)