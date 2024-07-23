def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    guess_counts = [0] * 6
    for g in guess:
        guess_counts[ord(g) - ord("B")] += 1

    black_pegs = sum((guess[i] == code[i]) and 1 or 0 for i in range(4))
    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_counts, "BOYYY")
    )

    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)