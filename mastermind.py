def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white_pegs = sum(min(count, guess.count(c)) for count, c in zip(code_count, "BOY"))

    black_pegs = sum(
        count == guess.count(c) and count > 0 for count, c in zip(code_count, "BOY")
    )

    return str(black_pegs) + "\n" + str(4 - black_pegs)