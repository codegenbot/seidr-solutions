def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
            code[i] = ""
            guess[i] = ""

    for i in range(4):
        for j in range(4):
            if code[j] == guess[i] and code[j] != "" and guess[i] != "":
                white_pegs += 1
                code[j] = ""
                guess[i] = ""

    return str(black_pegs) + "\n" + str(white_pegs)