def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1
    black_peg = 0
    white_peg = 0
    for i, c in enumerate(guess):
        if c == code[i]:
            black_peg += 1
        elif code_count[ord(c) - ord("A")] > 0:
            white_peg += 1
            code_count[ord(c) - ord("A")] -= 1
    return str(white_peg), str(black_peg)