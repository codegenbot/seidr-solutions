def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_counts[ord(code[i]) - ord("A")] > 0 and code_counts[ord(guess[i]) - ord("A")] > 0:
            white_pegs += 1

    return str(black_pegs) + " " + str(white_pegs)