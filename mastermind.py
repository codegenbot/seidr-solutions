def mastermind(code, guess):
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)

    black_pegs = sum(
        min(count, counts)
        for count, counts in zip(guess_counts.values(), code_counts.values())
    )
    white_pegs = 4 - black_pegs
    return str(white_pegs), str(black_pegs)