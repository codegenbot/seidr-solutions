def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_peg = sum(
        min(count, guess.count(c))
        for c, count in zip(
            map(str.maketrans({c: "" for c in "ABCDEFGHIJKLMNOPQRSTUVWXYZ"}), code),
            code_count,
        )
    )

    black_peg = sum(1 for c in code if c == guess[i])

    return str(black_peg) + "\n" + str(4 - black_peg)