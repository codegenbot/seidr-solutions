def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1
    black_pegs = sum(1 for c in code if c == guess[i])
    white_pegs = sum(
        min(code_counts[ord(c) - ord("A")], 1) for i, c in enumerate(guess)
    )
    return str(black_pegs), str(white_pegs)