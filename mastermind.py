def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    white_pegs = sum(
        min(c1.count(c), g1.count(c))
        for c, c1 in zip(guess, [code[i] if i < len(code) else "" for i in range(4)])
    )
    return str(black_pegs) + "\n" + str(4 - white_pegs)