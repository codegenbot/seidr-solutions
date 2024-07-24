def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b)
    black = sum(
        min(map(lambda x: 1 if guess[i] == code[j] and i != j else 0, range(4)))
        for i, j in enumerate(range(4))
    )
    return str(black), str(white)