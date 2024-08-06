def mastermind(code, guess):
    black = 0
    white = 0
    code_set = set(code)
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_set.remove(guess[i])
        elif guess[i] in code_set:
            white += 1
            code_set.remove(guess[i])
    return str(black) + "\n" + str(white)