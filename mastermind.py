def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    guess_count = [0] * 6
    for g in guess:
        guess_count[ord(g) - ord("A")] += 1

    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum(min(code_count[i], guess_count[i]) 
                     for i in range(6)) - black_pegs

    return str(black_pegs), str(white_pegs)