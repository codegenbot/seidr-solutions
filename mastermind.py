def mastermind(code, guess):
    counts = [0] * 6
    for c in code:
        counts[ord(c) - ord("B")] += 1

    black_pegs = sum((guess[i] == c) for i, c in enumerate(code))
    white_pegs = sum(min(count, guess.count(c)) for count, c in zip(counts, "BOYYY") if count > guess.count(c))

    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)