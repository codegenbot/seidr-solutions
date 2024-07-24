def mastermind(code, guess):
    code_set = set(code)
    white_peg = 0
    black_peg = 0

    for char in guess:
        if char in code_set:
            if code.index(char) == guess.index(char):
                black_peg += 1
            else:
                white_peg += 1

    return str(white_peg) + "\n" + str(black_peg)