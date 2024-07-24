def mastermind(code, guess):
    white = 0
    black = 0
    code_list = list(code)
    guess_list = list(guess)

    for i in range(4):
        if code_list[i] == guess_list[i]:
            black += 1
            code_list[i] = "X"
            guess_list[i] = "Y"

    for i in range(4):
        if guess_list[i] in code_list and code_list.index(guess_list[i]) != -1:
            white += 1
            code_list[code_list.index(guess_list[i])] = "X"

    return str(black) + "\n" + str(white)