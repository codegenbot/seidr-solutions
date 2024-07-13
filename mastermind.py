def mastermind(code, guess):
    code_count = [0] * 6
    white_pegs = 0
    black_pegs = 0
    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        else:
            code_count[ord(guess[i]) - ord("B")] += 1
    for i in range(4):
        if guess[i] != code[i]:
            white_pegs = min(white_pegs, code_count[ord(guess[i]) - ord("B")])
    return str(white_pegs) + "\n" + str(black_pegs)