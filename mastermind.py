def mastermind(code, guess):
    white = sum([1 for c in code if c in guess and code.count(c) > 1])
    black = sum([1 for c in code if c == guess[code.index(c)]])
    return str(black) + "\n" + str(4 - black - white)