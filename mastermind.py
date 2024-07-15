def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b) - 1
    white = len([x for x in guess if x in code]) - black
    return str(min(black, 4)) + "\n" + str(min(max(0, white - black), 4))