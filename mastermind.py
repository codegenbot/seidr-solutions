def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    guess_count = [0] * 6
    for g in guess:
        guess_count[ord(g) - ord("B")] += 1

    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)
    white_pegs = len(guess) - black_pegs
    for i in range(6):
        white_pegs += min(code_count[i], guess_count[i])

    return str(black_pegs), str(white_pegs)