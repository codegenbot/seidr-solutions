def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            correct_color = sum([1 for j in range(4) if code[j] == guess[i]])
            if correct_color > 0:
                white += correct_color - 1
    return str(black) + "\n" + str(white)