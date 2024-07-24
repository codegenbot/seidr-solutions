def mastermind(code, guess):
    white = sum(1 for c in code if c in guess and c != guess[guess.index(c)])
    black = sum(1 for c in range(len(code)) if code[c] == guess[c])
    return str(white), str(black)