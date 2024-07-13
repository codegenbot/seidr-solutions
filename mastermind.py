def mastermind(code, guess):
    code = [c for c in code]
    guess = [c for c in guess]
    white_pegs = 0
    black_pegs = 0

    for i, c in enumerate(guess):
        if c == code[i]:
            black_pegs += 1
        elif c in code:
            white_pegs += 1

    return str(white_pegs) + "\n" + str(black_pegs)