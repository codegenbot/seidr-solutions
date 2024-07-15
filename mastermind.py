def mastermind(code, guess):
    black = 0
    for c1, c2 in zip(guess, code):
        if c1 == c2:
            black += 1
            break
    white = sum(1 for c in guess if c in code) - black
    return str(black) + "\n" + str(min(max(0, white - black), 4))