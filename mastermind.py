def mastermind(code, guess):
    white = sum(1 for c in zip(guess, code) if c[0] == c[1])
    black = 0
    for i in range(len(code)):
        if guess[i] == code[i]:
            black += 1
    return str(black), str(4 - black)