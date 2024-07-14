def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    white = 0
    black = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif code.count(str(guess[i])) > 0:
            white += 1

    return str(white) + str(black)