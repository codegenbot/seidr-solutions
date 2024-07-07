def mastermind(code, guess):
    white_peg = 0
    black_peg = 0
    correct_matches = False

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif [c for c in code if c == guess[i]].count(guess[i]) > 0:
            white_peg += 1
        else:
            correct_matches = True

    return str(white_peg) + "\n" + str(black_peg)