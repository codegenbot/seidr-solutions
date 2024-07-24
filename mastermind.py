def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for i in range(4):
        code_counts[ord(code[i]) - ord("A")] += 1
        guess_counts[ord(guess[i]) - ord("A")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_counts[ord(code[i]) - ord("A")] > 0 and guess_counts[ord(guess[i]) - ord("A")] > 0:
            white_pegs += 1

    return str(black_pegs) + " " + str(white_pegs)