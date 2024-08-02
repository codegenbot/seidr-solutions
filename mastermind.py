def mastermind(code, guess):
    white = 0
    black = 0
    code_list = [char for char in code]
    guess_list = [char for char in guess]

    for i in range(4):
        if code_list[i] == guess_list[i]:
            black += 1
        elif str(code_list[i]) in str(guess_list):
            white += 1

    return str(black) + "\n" + str(white)