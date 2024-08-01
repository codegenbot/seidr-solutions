def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_count, "ABCDEF")
    )

    black_pegs = sum(
        c1 == c2 and p1 == p2
        for ((c1, p1), (c2, p2)) in zip(zip(code, range(4)), zip(guess, range(4)))
        if c1 == c2
    )

    return str(black_pegs) + "\n" + str(white_pegs)