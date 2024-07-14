def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(
        min(
            map(
                lambda x: 0 if x[0] != x[1] else 1,
                zip(*[(a, b) for a, b in zip(guess, code) if a != b]),
            )
        ).count(1)
    )
    return str(black), str(white)