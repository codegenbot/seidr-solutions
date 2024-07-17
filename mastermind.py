def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = sum(min(count, guess.count(c)) for c, count in zip(guess, code_count))
    return str(white_pegs), str(black_pegs)