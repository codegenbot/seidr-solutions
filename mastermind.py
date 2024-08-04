def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white_pegs = sum(min(count, guess.count(c)) for count, c in zip(code_count, "BOY"))

    black_pegs = sum(
        c1 == c2 and count1 > 0
        for ((c1, count1), (c2, count2)) in zip(
            zip(code, code_count), zip(guess, [0] * 4)
        )
    )

    return str(black_pegs) + "\n" + str(white_pegs)