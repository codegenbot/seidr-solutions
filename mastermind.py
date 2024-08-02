def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("A")] += 1
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)
    white_pegs = sum(
        min(a, b) for a, b in zip(code_counts, [guess.count(c) for c in set(guess)])
    )
    return str(white_pegs), str(black_pegs)