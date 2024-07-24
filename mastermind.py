def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = sum(
        min(count, 1) for _, count in collections.Counter(guess).most_common()
    )
    return str(black_pegs) + "\n" + str(white_pegs)