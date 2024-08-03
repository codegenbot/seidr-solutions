def mastermind(code, guess):
    code = [c for c in code]
    white = 0
    black = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code[i] = "X"
            guess[i] = "X"

    for i, c in enumerate(guess):
        if c != "X" and c in code:
            white += 1
            code[code.index(c)] = "X"

    return str(black) + "\n" + str(white)