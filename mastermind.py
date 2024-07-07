def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white_peg = 0
    black_peg = 0
    code_map = {}
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif code[i] not in code_map:
            code_map[code[i]] = True
            white_peg += 1
        else:
            code_map[code[i]] = False

    return str(white_peg) + "\n" + str(black_peg)