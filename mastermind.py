def mastermind(code, guess):
    white_peg_count = 0
    black_peg_count = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_peg_count += 1
        elif str(guess[i]) in code:
            white_peg_count += 1

    return str(white_peg_count), str(black_peg_count)