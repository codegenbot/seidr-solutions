def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i, c in enumerate(code):
        if c == guess[i]:
            black_pegs += 1
        elif c in guess:
            white_pegs += 1
    return (white_pegs, black_pegs)