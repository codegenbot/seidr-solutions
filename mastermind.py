```
def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip([c for c in code if c in guess], [c for c in guess]) if c1 == c2)
    white = len(set(guess) - set([c for c in code if c in guess])) or 0
    return str(min(4, black)), str(black)