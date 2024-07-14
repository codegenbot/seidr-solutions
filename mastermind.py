def get_pegs(code, guess):
    count_black = 0
    count_white = 0
    for i in range(4):
        if code[i] == guess[i]:
            count_black += 1
        elif guess.count(guess[i]) > code.count(code[i]):
            pass
        else:
            count_white += 1
    return str(count_black) + "\n" + str(count_white)