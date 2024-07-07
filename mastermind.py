def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white_peg = 0
    black_peg = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif code_count[ord(guess[i]) - ord("B")] > 0:
            white_peg += 1
            code_count[ord(guess[i]) - ord("B")] -= 1
        else:
            code_count[ord(guess[i]) - ord("B")] += 1

    return str(white_peg) + "\n" + str(black_peg)