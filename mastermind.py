def mastermind(code, guess):
    white = 0
    black = 0

    for c in code:
        code_index = code.index(c)
        guess_index = guess.index(c)

        if code_index == guess_index:
            black += 1
        else:
            white += 1

    return black, white