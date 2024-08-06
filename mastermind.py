def get_clue(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    white_pegs = 0
    black_pegs = 0
    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        elif code_counts[ord(guess[i]) - ord("B")] > 0:
            code_counts[ord(guess[i]) - ord("B")] -= 1
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)