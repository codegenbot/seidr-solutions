def mastermind(code, guess):
    white = sum(c in code for c in guess)
    black = sum(
        (c1, c2) == (c3, c4) and c1 != c2
        for ((c1, _), (c3, _)) in zip(guess[::], code[::])
    )
    return str(white), str(black)