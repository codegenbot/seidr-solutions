def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("B")] += 1

    black_pegs = sum(1 for a, b in zip(guess, code) if a == b)

    white_pegs = sum(min(count, guess.count(b)) for b, count in zip(guess, code_counts))
    return str(black_pegs) + "\n" + str(white_pegs)