def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6
    white_peg = 0
    black_peg = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        else:
            code_count[ord(code[i]) - ord("A")] += 1
            guess_count[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        white_peg += min(code_count[i], guess_count[i])

    return str(black_peg) + "\n" + str(white_peg)