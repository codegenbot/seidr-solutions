def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    guess_count = [0] * 6
    for g in guess:
        guess_count[ord(g) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            white_pegs += min(code_count[ord(c) - ord("B")] for c in code)
            white_pegs -= min(guess_count[ord(g) - ord("B")] for g in guess)

    return str(black_pegs), str(white_pegs)