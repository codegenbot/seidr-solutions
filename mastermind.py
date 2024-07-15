def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = len([x for x in guess if x not in [c for c in code if code.count(c) > 0]])
    return str(black) + "\n" + str(min(max(0, white), 4))