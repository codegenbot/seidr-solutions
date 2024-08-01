def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("B")] += 1

    black_peg = sum(
        c1 == c2 and i1 != i2
        for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess))
    )

    white_peg = (
        sum(min(code_count.count(c), guess.count(c)) - black_peg) if black_peg else 0
    )

    return str(black_peg), str(white_peg)