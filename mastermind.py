def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for c in code:
        if c == guess[0]:
            if c == guess[1] or c == guess[2] or c == guess[3]:
                black_pegs += 1
            else:
                white_pegs += 1
            guess = guess[1:]
        elif c in guess[:4]:
            guess = guess.replace(c, "", 1)

    return str(black_pegs) + "\n" + str(white_pegs)