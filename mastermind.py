def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif str(guess[i]) in code:
            white -= 1  
    white += str(guess).count(str(code[0])) + str(guess).count(str(code[1])) + str(guess).count(str(code[2])) + str(guess).count(str(code[3])) - black  
    return str(black) + "\n" + str(white)