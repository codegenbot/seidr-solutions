def mastermind(code, guess):
    black = 0
    white = 0
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1
    for i, c in enumerate(guess):
        if c == code[i]:
            black += 1
        elif code_counts[ord(c) - ord("B")] > 0:
            white += 1
            code_counts[ord(c) - ord("B")] -= 1
    return str(white), str(black)