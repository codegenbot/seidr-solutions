def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for c in code:
        if c == guess[code.index(c)]:
            black_pegs += 1
        elif str(c) in str(guess):
            white_pegs += 1

    return str(black_pegs) + "\n" + str(4 - black_pegs)