def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = {}
    guess_counts = {}

    for c in code:
        if c not in code_counts:
            code_counts[c] = 1
        else:
            code_counts[c] += 1

    for i in range(len(guess)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess[i] in code_counts and code_counts[guess[i]] > 0:
            white_pegs += 1
            code_counts[guess[i]] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)