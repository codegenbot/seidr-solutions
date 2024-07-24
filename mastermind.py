def get_mastermind_clue(code, guess):
    black_pegs = sum(
        [c1 == c2 and i == j for i, c1 in enumerate(code) for j, c2 in enumerate(guess)]
    )
    white_pegs = sum([c1 in code and c1 != guess[i] for i in range(4)])
    return str(white_pegs), str(black_pegs)