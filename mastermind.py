def mastermind(code, guess):
    white = 0
    black = 0
    code_list = list(code)
    guess_list = list(guess)

    for i in range(4):
        if code_list[i] == guess_list[i]:
            black += 1
            code_list[i], guess_list[i] = "", ""
            break
        else:
            for j in range(4):
                if code_list[i] == guess_list[j] and code_list[i] != "":
                    white += 1
                    code_list[i], guess_list[j] = "", ""
                    break

    return black, white