def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b)
    black = sum(
        min(c.count(b), a.count(b))
        for a, c in zip(guess, [code[:i] + code[i + 1 :] for i in range(4)])
    )
    return str(black) + "\n" + str(4 - black)