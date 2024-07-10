def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    guess_count = [0] * 6
    for g in guess:
        if g in code:
            if code.index(g) == guess.index(g):
                black_pegs += 1
            else:
                white_pegs += 1
        else:
            white_pegs += 1

    return str(black_pegs), str(white_pegs)