def get_clue(code, guess):
    code_counts = [0] * 6
    code_guess_counts = [0] * 6
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        else:
            code_counts[ord(guess[i]) - ord("A")] += 1

    for i in range(4):
        if guess[i] != code[i]:
            code_guess_counts[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        white_pegs = white_pegs + min(code_guess_counts[i], code_counts[i])

    return str(white_pegs) + "\n" + str(black_pegs)