def mastermind(code, guess):
    black = sum(
        c1 == c2 and i == j
        for i, (c1, _) in enumerate(guess)
        for _, c2 in enumerate(code)
    )
    white = (
        sum(c1 == c2 for c1, _ in enumerate(guess) for _, c2 in enumerate(code)) - black
    )
    return str(white), str(black)