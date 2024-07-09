def mastermind(code, guess):
    black = 0
    white = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif code_count[ord(code[i]) - 65] and guess_count[ord(guess[i]) - 65]:
            white += 1

    return str(black) + "\n" + str(white)