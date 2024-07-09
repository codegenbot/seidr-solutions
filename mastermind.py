def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    remaining_code = [c for c in code if c not in guess]
    white = len(set([c for c in guess if c in remaining_code]))
    return str(white), str(black)