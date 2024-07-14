def mastermind(code, guess):
    white = 0
    black = 0
    code_list = list(code)
    guess_list = list(guess)

    for i in range(4):
        if code_list[i] == guess_list[i]:
            black += 1
            code_list[i] = "X"
            guess_list[i] = "X"
        elif guess_list[i] in code_list:
            white += 1
            code_list[code_list.index(guess_list[i])] = "X"

    return str(white) + "\n" + str(black)