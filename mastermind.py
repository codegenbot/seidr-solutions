def mastermind(code, guess):
    code_counts = [code.count(c) for c in set(code)]
    guess_counts = [guess.count(c) for c in set(guess)]
    white_pegs = sum(
        min(count1, count2) for count1, count2 in zip(code_counts, guess_counts)
    )
    black_pegs = sum(
        1
        for c, count1, count2 in zip(guess, code_counts, guess_counts)
        if count1 == 1 and count2 > 0
    )
    return str(white_pegs), str(black_pegs)