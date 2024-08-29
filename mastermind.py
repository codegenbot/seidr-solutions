def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    black_pegs = 0
    white_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
            code[i] = "x"
            guess[i] = "x"

    for i in range(4):
        if guess[i] in code:
            white_pegs += 1
            code[code.index(guess[i])] = "x"

    return str(black_pegs) + "\n" + str(white_pegs)