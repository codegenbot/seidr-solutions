def mastermind(code, guess):
    black_pegs = sum(c1 == c2 and i1 == i2 for i1, c1 in enumerate(code) for i2, c2 in enumerate(guess))
    code_count = [0] * 6

    for c in guess:
        if c in code:
            code_count[ord(c) - ord("A")] += (code.count(c), 1).index(1)
        else:
            code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(min(count, code.count(chr(i + ord("A")))) for i, count in enumerate(code_count))
    return str(white_pegs) + "\n" + str(black_pegs)