def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("A")] += 1

    guess_counts = [0] * 6
    for g in guess:
        guess_counts[ord(g) - ord("A")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif (
            code_counts[ord(guess[i]) - ord("A")] > 0
            and guess_counts[ord(guess[i]) - ord("A")] > 0
        ):
            white_pegs += 1
            code_counts[ord(guess[i]) - ord("A")] -= 1
            guess_counts[ord(guess[i]) - ord("A")] -= 1

    for i in range(6):
        if code_counts[i] > 0 and guess_counts[i] > 0:
            white_pegs += min(code_counts[i], guess_counts[i])

    return str(black_pegs) + "\n" + str(white_pegs)