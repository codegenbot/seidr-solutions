def mastermind(code, guess):
    white = sum(
        c1 == c2 and i != j for i, c1 in enumerate(guess) for j, c2 in enumerate(code)
    )
    black = sum((c1, c2) in zip(guess, code) for c1, c2 in zip(guess, code))
    return str(4 - black), str(black)