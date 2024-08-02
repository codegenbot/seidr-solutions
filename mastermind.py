def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - 55] += 1

    black_peg = 0
    white_peg = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif str(code[i]) in str(guess[i]):
            white_peg += 1

    return black_peg, 4 - black_peg - white_peg