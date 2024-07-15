def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(
        min(c.count(b), a.count(b))
        for a, c in zip(guess, [code[:2], code[2:]])
        for b in set(a + c)
    )
    return str(black) + "\n" + str(4 - black)