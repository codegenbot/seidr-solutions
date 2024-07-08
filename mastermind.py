def mastermind(code, guess):
    white = 0
    black = sum(1 for c, g in zip(code, guess) if c == g)
    for i in range(4):
        if str(guess[i]) in str(code) and code[i] != guess[i]:
            white += 1
    return black, 4 - black - white