def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    white_pegs = sum(
        min(code_counts[ord(c) - ord("B")], 1)
        for c in guess
        if c != guess[i]
        for i in range(4)
    )
    return str(white_pegs), str(black_pegs)