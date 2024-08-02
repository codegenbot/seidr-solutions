def get_mastermind_code-master(code_guess):
    white = 0
    black = 0
    code_list = [char for char in code_guess[0]]
    guess_list = [char for char in code_guess[1]]

    for i in range(4):
        if code_list[i] == guess_list[i]:
            black += 1
        elif guess_list.count(code_list[i]) > 0:
            white += 1
    return str(black) + "\n" + str(white)