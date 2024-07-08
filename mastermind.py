def mastermind(code, guess):
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)

    black_pegs = sum(
        min(count, guess.count(c)) for c, count in zip("ABCDEF", code_counts.values())
    )
    white_pegs = 4 - black_pegs
    return str(white_pegs) + "\n" + str(black_pegs)