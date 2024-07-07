def mastermind(code, guess):
    white_peg = 0
    black_peg = 0
    code_count = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        else:
            correct_color = False
            for j in range(4):
                if code[j] == guess[i] and j != i:
                    white_peg += 1
                    correct_color = True
            if not correct_color:
                code_count[ord(guess[i]) - ord("B")] += 1

    return str(white_peg) + "\n" + str(black_peg)