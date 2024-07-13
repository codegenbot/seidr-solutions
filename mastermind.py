def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    black_pegs = sum([c1 == c2 and c1 != "B" for c1, c2 in zip(code, guess)])

    white_pegs = (
        sum(min(code_count[i], guess.count(chr(ord("B") + i))) for i in range(6))
        - black_pegs
    )

    return str(black_pegs), str(white_pegs)