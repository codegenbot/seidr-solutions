def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(
        min(map(guess.count, c)) for c in [code[i : i + 2] for i in range(0, 8, 2)]
    )
    return str(black) + "\n" + str(4 - black)