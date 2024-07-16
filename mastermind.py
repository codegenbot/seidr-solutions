def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_freq = {}
    for c in code:
        if c not in code_freq:
            code_freq[c] = 1
        else:
            code_freq[c] += 1

    for c, g in zip(code, guess):
        if c == g:
            black_pegs += 1
            code_freq[c] -= 1
        elif g in code_freq and code_freq[g] > 0:
            white_pegs += 1
            code_freq[g] -= 1

    return str(black_pegs) + "\n" + str(4 - black_pegs)