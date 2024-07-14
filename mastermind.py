def mastermind(code, guess):
    white = sum(1 for c in zip(code, guess) if c[0] == c[1])
    black = len([c for c in code if c in guess and code.index(c) == guess.index(c)])
    return str(black), str(len(guess) - black - white)