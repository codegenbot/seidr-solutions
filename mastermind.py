def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1
    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_count, "ABCDEF")
    )
    black_pegs = sum(1 for i, j in enumerate(guess) if j == code[i])
    return str(4 - black_pegs) + "\n" + str(black_pegs)