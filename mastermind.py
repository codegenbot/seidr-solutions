def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_dict = {}
    for c in code:
        if c in code_dict:
            code_dict[c] += 1
        else:
            code_dict[c] = 1

    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        elif guess[i] in code_dict and code_dict[guess[i]] > 0:
            code_dict[guess[i]] -= 1
            white_pegs += 1

    return str(black_pegs), str(white_pegs)