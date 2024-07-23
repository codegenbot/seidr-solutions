def mastermind(code, guess):
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    white_pegs = 0
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1

    for c in guess:
        count = code_counts[ord(c) - ord("A")]
        if count > 0 and c != code[count-1]:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)