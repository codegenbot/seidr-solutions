def mastermind(code, guess):
    count_black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    count_white = 4 - count_black
    return str(count_black) + "\n" + str(count_white)