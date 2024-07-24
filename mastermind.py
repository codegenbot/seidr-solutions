def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6
    black_pegs = 0
    white_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_counts[ord(code[i]) - ord("A")] += 1
            guess_counts[ord(guess[i]) - ord("A")] += 1

    white_pegs = sum(min(c, g) for c, g in zip(code_counts, guess_counts)) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)