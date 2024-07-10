def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_list = list(code)
    guess_list = list(guess)

    for i in range(4):
        if code_list[i] == guess_list[i]:
            black_pegs += 1
        elif str(guess_list[i]) in ''.join(map(str, code_list)):
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)