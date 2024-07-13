def mastermind(code, guess):
    white_peg = 0
    black_peg = 0

    for i, char in enumerate(guess):
        if char == code[i]:
            black_peg += 1
        elif char in code:
            white_peg += 1

    return str(black_peg), str(white_peg)