def mastermind(code, guess):
    code_set = set(code)
    guess_set = set(guess)

    white_peg_count = 0
    for char in code:
        if char in guess and char != code[guess.index(char)]:
            white_peg_count += 1

    black_peg_count = 4 - white_peg_count

    return str(white_peg_count) + "\n" + str(black_peg_count)