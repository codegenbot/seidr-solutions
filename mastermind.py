def mastermind(code, guess):
    counts = [0] * 6
    for c in code:
        counts[ord(c) - ord("B")] += 1

    black_pegs = sum((guess[i] == c and 1 or 0) for i, c in enumerate(code))
    white_pegs = sum(min(count, guess.count(c)) for count, c in zip(counts, "BOYYY"))

    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)