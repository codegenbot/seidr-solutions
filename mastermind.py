def mastermind(code, guess):
    black_pegs = sum(1 for c, count in zip(code, guess) if c == guess[c])
    white_pegs = (
        sum(min(count, code_count.get(c, 0)) for c, count in guess_count.items())
        - black_pegs
    )
    return str(black_pegs) + "\n" + str(white_pegs)