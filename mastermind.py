def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - 65] += 1
    white_pegs = sum(
        min(count, guess.count(c))
        for c, count in zip(map(chr, range(65, 71)), code_count)
    )
    black_pegs = sum(
        a == b and c == d for a, c in zip(code, guess) for b, d in set(zip(code, guess))
    )
    return str(black_pegs), str(white_pegs)