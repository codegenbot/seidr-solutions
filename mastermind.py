def mastermind(code, guess):
    count_white = 0
    count_black = 0

    for i in range(4):
        if code[i] == guess[i]:
            count_black += 1
        elif str(code[i]) in str(guess):
            count_white += 1

    return count_black, count_white