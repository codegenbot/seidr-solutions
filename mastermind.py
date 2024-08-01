def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_peg = 0
    black_peg = 0
    for i, c in enumerate(guess):
        if c == code[i]:
            black_peg += 1
        elif code_count[ord(c) - ord("A")] > 0:
            code_count[ord(c) - ord("A")] -= 1
            white_peg += 1

    return str(black_peg) + "\n" + str(white_peg)