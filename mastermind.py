def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    guess_count = [0] * 6
    for g in guess:
        guess_count[ord(g) - ord("B")] += 1

    for i in range(6):
        if code_count[i] > 0 and guess_count[i] > 0:
            black_pegs += min(code_count[i], guess_count[i])
        elif guess_count[i] > 0:
            white_pegs = sum([min(x, y) for x,y in zip(code_count,guess_count)])

    return str(black_pegs), str(white_pegs)