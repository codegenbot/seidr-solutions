def mastermind(code, guess):
    black = sum(
        c1 == c2 and p1 == p2
        for c1, c2 in zip(code, guess)
        for p1, p2 in [(0, 0), (1, 1)]
    )
    white = len([c for c1, c2 in zip(code, guess) if c1 == c2][0])
    return str(4 - white), str(black)