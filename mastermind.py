def mastermind(code, guess):
    black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white = sum(
        min(a.count(b), c.count(b)) for a, b, c in zip([code], list(guess), repeat(0))
    )
    return str(black) + "\n" + str(len(guess) - black)