def mastermind(code, guess):
    white = sum(
        [c1 == c2 and i != j for i, c1 in enumerate(guess) for j, c2 in enumerate(code)]
    )
    black = len([i for i, (c1, c2) in enumerate(zip(guess, code)) if c1 == c2])
    return str(4 - black), str(black)