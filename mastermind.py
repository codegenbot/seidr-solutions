def mastermind(code, guess):
    white = sum(
        [
            c1 == c2 and i != j
            for i, (c1, _) in enumerate(guess)
            for j, (_, c2) in enumerate(code)
        ]
    )
    black = sum([c1 == c2 for _, c1 in enumerate(guess) for _, c2 in enumerate(code)])
    return str(black), str(white)