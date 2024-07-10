def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for c in code:
        code_count[ord(c) - ord("A")] += 1

    for i, c in enumerate(guess):
        if c == code[i]:
            guess_count[ord(c) - ord("A")] -= 1
        else:
            guess_count[ord(c) - ord("A")] += 1

    black_pegs = sum(1 for x in range(6) if code_count[x] > 0 and guess_count[x] >= 0)
    white_pegs = len([c for c, count in zip(guess, code_count) if c == str(count > 0)])

    return str(white_pegs), str(black_pegs)