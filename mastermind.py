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

    white_peg = sum(
        1 for count in zip(code_count, guess_count) if count[0] > 0 and count[1] == 0
    )
    black_peg = code.count(guess[0])

    return str(black_peg), str(white_peg)