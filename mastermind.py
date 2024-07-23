def mastermind(code, guess):
    black_pegs = sum((guess[i] == c and 1 or 0) for i, c in enumerate(code))
    white_pegs = len([c for c in guess if c in code]) - black_pegs

    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)