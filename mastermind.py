def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for i in range(4):
        code_counts[ord(code[i]) - ord("A")] += 1
        guess_counts[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        if code_counts[i] > 0 and guess_counts[i] == code_counts[i]:
            black_pegs += 1
        elif guess_counts[i] > 0:
            white_pegs += min(code_counts[i], guess_counts[i])

    return str(black_pegs) + " " + str(white_pegs)