def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        if char in "RGBYOW":
            code_counts["RGBYOW".index(char)] += 1
    correct_count = sum(c == g for c, g in zip(code, guess))
    white_pegs = correct_count - sum(1 for i, j in zip(code, guess) if i == j)
    return str(white_pegs), str(correct_count - white_pegs)