def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for c in code:
        code_count[ord(c) - ord("B")] += 1
    for g in guess:
        guess_count[ord(g) - ord("B")] += 1

    white_pegs = sum(min(code_count[i], guess_count[i]) for i in range(6))

    black_pegs = 0
    code_guess = [c for c, g in zip(code, guess) if c == g]
    black_pegs = len(code_guess)

    return str(black_pegs), str(white_pegs)