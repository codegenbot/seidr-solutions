def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(
        min(map(lambda x: 1 if x[0] == x[1] else 0, [(a, c) for c in code]))
        for a in guess
    )
    return str(black), str(white)