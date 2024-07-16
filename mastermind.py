def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('A')] += 1

    black_pegs = sum(1 for c in zip(code, guess) if c[0] == c[1])
    white_pegs = 0
    for c in guess:
        if c in code and code_count[ord(c) - ord('A')] > 0:
            code_count[ord(c) - ord('A')] -= 1
            white_pegs += 1

    return str(white_pegs), str(black_pegs)