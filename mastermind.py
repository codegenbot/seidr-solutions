def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
            code[i] = "x"
            guess[i] = "x"

    for char in set(guess):
        if guess.count(char) == code.count(char):
            white_pegs += 1

    return str(white_pegs) + "\n" + str(black_pegs)