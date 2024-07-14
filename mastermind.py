def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b)
    black = 4 - sum(
        (a.count(b), c.count(b))[c.count(b) > 0]
        for a, c in zip(guess, [code for _ in range(4)]).count(2)
    )
    return f"{black}\n{4-white}"