def mastermind(code, guess):
    color_count = [0] * 6
    for c in code:
        color_count[int(c) - 1] += 1
    white_pegs = sum(
        [min(count, guess.count(str(i + 1))) for i, count in enumerate(color_count)]
    )
    black_pegs = sum(
        [min(count, int(guess[i] == str(i + 1 + 1))) for i, _ in enumerate(guess)]
    )
    return str(black_pegs), str(white_pegs)