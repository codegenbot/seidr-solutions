def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('W')] += 1

    black_pegs = sum((c1 == c2 and c1 != ' ') for c1, c2 in zip(code, guess))
    white_pegs = sum(min(code_count.count(c), guess.count(c)) for c in set(guess))

    return str(white_pegs), str(black_pegs)