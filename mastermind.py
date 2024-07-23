def mastermind(code, guess):
    code_counts = [code.count(c) for c in set(code)]
    guess_counts = [guess.count(c) for c in set(guess)]
    white_pegs = sum(
        min(count1, count2) for count1, count2 in zip(guess_counts, code_counts)
    )
    black_pegs = sum(
        count1 - min(count1, count2)
        for count1, count2 in zip(guess_counts, code_counts)
    )
    return str(black_pegs), str(white_pegs)