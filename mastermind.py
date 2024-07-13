def mastermind(code, guess):
    black_peg = 0
    white_peg = 0
    code_count = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        else:
            for j in range(6):
                if str(j + 1) == str(guess[i]):
                    code_count[j] += 1
    for i in range(6):
        if code.count(str(i + 1)) == code_count[i]:
            white_peg += code_count[i]
    return str(black_peg), str(white_peg)