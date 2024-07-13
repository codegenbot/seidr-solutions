def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            count = sum(1 for c in guess if c == code[i])
            white += min(count, 1)
    return str(black) + "\n" + str(white)