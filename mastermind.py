def get_clue(code, guess):
    black_peg = 0
    white_peg = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif str(code[i]) in str(guess):
            white_peg += 1
    return str(white_peg) + "\n" + str(black_peg)