def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_counts[ord(code[i]) - ord("A")] += 1
            guess_counts[ord(guess[i]) - ord("A")] += 1

    matching_counts = sum(min(count, other) for count, other in zip(code_counts, guess_counts))
    white_pegs = matching_counts - black_pegs

    return str(black_pegs) + " " + str(white_pegs)