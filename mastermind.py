```
def mastermind(code, guess):
    black = 0
    white = 0
    for i in range(6):
        if code[i//2] == str(guess)[i]:
            black += 1
        elif str(guess)[i] in code:
            white += 1
    return str(black) + "\n" + str(white)