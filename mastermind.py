def get_mastermind_clue(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(min(count, guess.count(c)) for c in "ABCCDE")
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    return str(black_pegs), str(4 - black_pegs + white_pegs)