def mastermind(code, guess):
    white = 0
    black = 0
    code_set = set(code)
    guess_set = set(guess)

    if len(code_set) != 4 or len(guess_set) != 4:
        return str(white) + "\n" + str(black)

    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
        elif code[i] in guess:
            white += 1

    return str(white) + "\n" + str(black)