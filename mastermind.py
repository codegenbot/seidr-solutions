Here is the solution:

def mastermind(code, guess):
    white = 0
    black = 0
    
    for i in range(4):
        if guess[i] == code[i]:
            black += 1
        else:
            for j in range(4):
                if guess[j] == code[i]:
                    white += 1
                    break

    return str(black) + '\n' + str(white)