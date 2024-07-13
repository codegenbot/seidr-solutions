def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1
    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_count, "ABCCDE")
    )
    black_pegs = sum(
        [
            c == g and code_count[ord(c) - ord("A")] > 0 for c, g in zip(guess, code)
        ].count(True)
    )
    return str(black_pegs), str(white_pegs)