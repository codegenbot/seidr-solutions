def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(c))
        for c, count in zip(map(chr, range(ord("A"), ord("F") + 1)), code_count)
    )

    black_pegs = sum(code[i] == guess[i] for i in range(4))

    return str(black_pegs) + "\n" + str(4 - black_pegs)