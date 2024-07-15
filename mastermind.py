def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = min(len([x for x in guess if x in code]) - black, 4)
    return str(black) + "\n" + str(max(0, 4 - black))