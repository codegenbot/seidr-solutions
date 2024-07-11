def mastermind(code, guess):
    black = 0
    white = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif code_count.get(guess[i]) > 0:
            white += 1
            code_count[guess[i]] -= 1

    return str(black) + "\n" + str(white)