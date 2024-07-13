def mastermind(code, guess):
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)

    white_pegs = sum(
        min(count, gcount)
        for count, gcount in zip(code_counts.values(), guess_counts.values())
    )
    black_pegs = (
        sum(
            count == gcount
            for count, gcount in zip(code_counts.values(), guess_counts.values())
        )
        - white_pegs
    )

    return str(white_pegs) + "\n" + str(black_pegs)