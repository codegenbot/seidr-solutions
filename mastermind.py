def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    black_pegs = sum(
        [min(count, guess.count(c)) for _, count, c in zip(range(6), code_count, guess)]
    )
    white_pegs = len(guess) - black_pegs
    return str(white_pegs) + "\n" + str(black_pegs)