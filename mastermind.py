def mastermind(code, guess):
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)

    black_peg = 0
    white_peg = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif code[i] in guess[:i] or code[i] in guess[i + 1 :]:
            white_peg += 1

    return str(black_peg), str(white_peg)