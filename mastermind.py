def mastermind(code, guess):
    white = 0
    black = 0
    code_list = [char for char in code]
    guess_list = [char for char in guess]

    for i in range(4):
        if code_list[i] == guess_list[i]:
            black += 1
        elif guess_list.count(code_list[i]) > 0:
            white += 1

    return str(black) + "\n" + str(white)