def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = {}
    for c in code:
        if c in code_counts: 
            code_counts[c] += 1
        else:
            code_counts[c] = 1

    guess_counts = {}
    for g in guess:
        if g in guess_counts:
            guess_counts[g] += 1
        else:
            guess_counts[g] = 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_counts.get(code[i], 0) > 0 and code_counts[code[i]] - 1 == guess_counts[guess[i]]:
            white_pegs += 1
            code_counts[code[i]] -= 1

    return str(black_pegs), str(white_pegs)