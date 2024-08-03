def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = 0
    for i, c in enumerate(guess):
        if c == code[i]:
            black += 1
    return black, 4 - black + white