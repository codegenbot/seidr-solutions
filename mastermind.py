def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = len(set(guess)) - len(
        [x for x in guess if x in code] and [x for x in code if x in guess][0]
    )
    return str(black) + "\n" + str(min(max(0, white - black), 4))