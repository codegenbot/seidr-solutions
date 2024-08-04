def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    white_peg = 0
    black_peg = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif guess.count(guess[i]) > 0:
            white_peg += 1
    return str(black_peg) + "\n" + str(white_peg)