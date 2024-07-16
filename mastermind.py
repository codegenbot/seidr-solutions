def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    black = sum(
        (c1 == c and c2 != c)
        for c, (c1, c2) in itertools.product("RGBWY", repeat=4)
        if (code.count(c), guess.count(c)) == (1, 1)
    )
    return str(white), str(black)