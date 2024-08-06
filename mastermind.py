def mastermind(code, guess):
    code_counts = [code.count(c) for c in set(code)]
    guess_counts = [guess.count(c) for c in set(guess)]

    white_pegs = sum(
        min(count1, count2) for count1, count2 in zip(code_counts, guess_counts)
    )
    black_pegs = (
        sum(min(count1, count2) for count1, count2 in zip(code_counts, guess_counts))
        - white_pegs
    )

    return str(white_pegs), str(black_pegs)