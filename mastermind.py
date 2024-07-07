def mastermind(code, guess):
    white_peg = 0
    black_peg = 0
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for i in range(4):
        code_counts[ord(code[i]) - ord("B")] += 1
        guess_counts[ord(guess[i]) - ord("B")] += 1

    for i in range(6):
        if code_counts[i] > 0 and guess_counts[i] > 0:
            black_peg += min(code_counts[i], guess_counts[i])
        elif code_counts[i] > 0:
            white_peg += code_counts[i] - guess_counts[i]
        elif guess_counts[i] > 0:
            white_peg += guess_counts[i]

    return str(white_peg) + "\n" + str(black_peg)