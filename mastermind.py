def mastermind(code, guess):
    correct = sum(1 for c in zip(guess, code) if c[0] == c[1])
    return str(correct), str(max(0, 4 - correct))