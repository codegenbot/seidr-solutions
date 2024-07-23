def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1

    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    white_pegs = 4 - black_pegs
    for count, c in zip(code_counts, "ABCDEF"):
        white_pegs -= min(count, guess.count(c))
    
    white_pegs = min(white_pegs, len([c1, c2] for c1, c2 in zip(code, guess) if c1 != c2))

    return str(black_pegs) + "\n" + str(white_pegs)