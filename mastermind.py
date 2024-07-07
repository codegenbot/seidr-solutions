def mastermind(code, guess):
    white_peg = 0
    black_peg = 0
    correct_matches = False

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
            correct_matches = True
        elif correct_matches:
            white_peg += 1
        else:
            code_count[ord(guess[i]) - ord("B")] += 1

    return str(white_peg) + "\n" + str(black_peg)