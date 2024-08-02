def mastermind(code, guess):
    white = sum(1 for c in guess if c in code and code.index(c) != guess.index(c))
    black = sum(1 for c in range(len(guess)) if c < len(code) and code[c] == guess[c])
    return str(black) + "\n" + str(white)