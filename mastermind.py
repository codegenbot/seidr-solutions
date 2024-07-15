def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = len([x for x in guess if x in code]) - black
    return str(black) + "\n" + str(min(max(0, white), 4))