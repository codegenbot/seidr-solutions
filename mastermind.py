def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1
    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_count, "ABCDEF")
    )
    black_pegs = sum(a == b for a, b in zip(code, guess))
    return str(4 - black_pegs), str(black_pegs)