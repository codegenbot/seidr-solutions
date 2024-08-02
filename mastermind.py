def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6
    white_pegs = 0
    black_pegs = 0

    for c in code:
        code_count[ord(c) - ord("B")] += 1
    for g, c in zip(guess, code):
        if g == c:
            black_pegs += 1
        else:
            guess_count[ord(g) - ord("B")] += 1

    for i in range(6):
        white_pegs += min(code_count[i], guess_count[i])

    return str(black_pegs) + "\n" + str(white_pegs)