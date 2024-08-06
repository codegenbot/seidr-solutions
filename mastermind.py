def mastermind(code, guess):
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)

    white_pegs = sum(
        min(count1, count2)
        for count1, count2 in zip(code_counts.values(), guess_counts.values())
    )
    black_pegs = sum(
        (count1 == 1 and count2 > 0) or (count1 > 1 and count2 >= count1)
        for count1, count2 in zip(code_counts.values(), guess_counts.values())
    )

    return str(4 - black_pegs), str(black_pegs)