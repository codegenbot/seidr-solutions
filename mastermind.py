def mastermind(code, guess):
    count_black = 0
    count_white = 0
    for i in range(4):
        if code[i] == guess[i]:
            count_black += 1
        elif code[i] in guess:
            count_white += 1
    return str(count_black) + "\n" + str(count_white)