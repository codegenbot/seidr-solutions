def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_count = code.count(guess[i])
            if code_count > 0:
                white_pegs += 1
            code = code[:i] + " " + code[i + 1 :]

    return str(black_pegs) + "\n" + str(white_pegs)