def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_count = {}
    for c in code:
        if c not in code_count:
            code_count[c] = 1
        else:
            code_count[c] += 1

    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        elif code_count.get(guess[i], 0) > 0:
            white_pegs += 1
            code_count[guess[i]] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)