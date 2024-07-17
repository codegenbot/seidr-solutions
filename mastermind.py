def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    black_pegs = sum(1 for c in code if c == g)
    white_pegs = sum(min(code_count[ord(g) - ord("B")], 1) for g in guess)
    return str(black_pegs) + "\n" + str(4 - black_pegs + white_pegs)