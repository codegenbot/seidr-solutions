def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    black = len(
        [i for i, (c1, c2) in enumerate(zip(guess, code)) if c1 == c2 and i < 4]
    )
    return str(4 - black), str(black)