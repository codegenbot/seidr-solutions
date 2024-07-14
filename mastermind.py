def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for c in code:
        if c == guess[0]:
            if all(c != x for x in guess[1:]):
                black_pegs += 1
            else:
                white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)