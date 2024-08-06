def mastermind(code, guess):
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white = sum(
        min(count, guess.count(c))
        for c, count in dict(zip("ABCDEF", [code.count(c) for c in "ABCDEF"]))
    ).count(0)
    return str(white), str(black)