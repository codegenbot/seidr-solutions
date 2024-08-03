def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(c)) for c, count in zip(map(ord, code), code_count)
    )
    black_pegs = sum([guess.count(c) for c in code if c == guess[i] and i < len(code)])

    return str(white_pegs) + "\n" + str(len(code) - white_pegs - black_pegs)