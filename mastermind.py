def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white = len(set([c for c in code if c in guess and c != [c for c in code if c == g][0] for g in guess])) - black
    return str(white), str(black)