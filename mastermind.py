def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b and a != "B")
    black = sum(
        1
        for i, c in enumerate(code)
        for j, d in enumerate(guess)
        if c == d and c != "O" and i == j
    )
    return str(white), str(black)