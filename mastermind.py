def mastermind(code, guess):
    count_black = 0
    count_white = 0
    code_list = [i for i in code]
    guess_list = [i for i in guess]

    for i in range(4):
        if code_list[i] == guess_list[i]:
            count_black += 1
        elif str(code_list[i]) in str(guess_list):
            count_white += 1

    return f"{count_black}\n{count_white}"