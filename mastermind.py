def mastermind(code, guess):
    guess_counts = {}
    for c in guess:
        if c in guess_counts:
            guess_counts[c] += 1
        else:
            guess_counts[c] = 1

    black_pegs = 0
    white_pegs = 0

    code_used = [False] * 4
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
            code_used[i] = True
        elif not code_used[i] and code[i] in guess_counts:
            white_pegs += 1
            guess_counts[code[i]] -= 1

    return str(black_pegs) + " " + str(white_pegs)