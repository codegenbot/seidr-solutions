def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip([c for c in code if c in guess], [c for c in guess]) if c1 == c2)
    white = len(guess) - black
    return str(min(4, white)), str(black)