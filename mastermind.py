def mastermind(code, guess):
    code_chars = [c for c in code]
    guess_chars = [c for c in guess]
    white_peg_count = 0
    black_peg_count = 0

    for i in range(4):
        if code_chars[i] == guess_chars[i]:
            black_peg_count += 1
        elif guess_chars[i] in code_chars:
            white_peg_count += 1

    return str(black_peg_count) + "\n" + str(white_peg_count)