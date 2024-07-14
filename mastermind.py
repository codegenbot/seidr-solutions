def mastermind(code, guess):
    white = 0
    black = 0
    code_list = list(code)
    guess_list = list(guess)
    for i in range(4):
        if code_list[i] == guess_list[i]:
            black += 1
        elif guess_list.count(code_list[i]) > 0:
            white += 1
    return str(black) + "\n" + str(white)