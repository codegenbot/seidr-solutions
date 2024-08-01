def mastermind(code, guess):
    white = sum([1 for c in zip(code, guess) if c[0] == c[1]])
    black = 4 - sum([1 for c in set(zip(code, guess)) if list(c).count(c[0]) == 2])
    return str(white), str(black)