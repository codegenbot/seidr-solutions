def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    color_count = {}
    for c in code:
        if c in color_count:
            color_count[c] += 1
        else:
            color_count[c] = 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in color_count and color_count[code[i]] > 0:
            white_pegs += 1
            color_count[code[i]] -= 1

    return str(black_pegs), str(white_pegs)