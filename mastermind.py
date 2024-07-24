def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_count[ord(code[i]) - ord('A')] > 0:
            code_count[ord(code[i]) - ord('A')] -= 1
            white_pegs += 1

    for i in range(6):
        if code_count[i] > 0:
            white_pegs += code_count[i]

    return str(black_pegs) + " " + str(white_pegs)