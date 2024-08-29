def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1

    black_pegs = sum(
        c == g and c_count > 0 for c, c_count, g in zip(code, code_count, guess)
    )

    white_pegs = (
        sum(min(c_count, g.count(c)) for c, c_count, g in zip(code, code_count, guess))
        - black_pegs
    )

    return str(white_pegs) + "\n" + str(black_pegs)