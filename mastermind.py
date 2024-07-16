def mastermind(code, guess):
    blacks = 0
    whites = 0
    for i in range(4):
        if code[i] == guess[i]:
            blacks += 1
        elif str(code[i]) in str(guess):
            whites += 1
    return str(min(4, whites)), str(blacks)