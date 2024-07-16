def mastermind(code, guess):
    black_count = sum([c1 == c2 and p1 == 0 for c1, c2, p1 in zip(code, guess, [x.count(c) for x in (code, guess)] if c1 == c2 else 0])
    whites = len([i for i, (c, g) in enumerate(zip(code, guess)) if c != g and c in guess]) - black_count
    return str(black_count), str(whites)