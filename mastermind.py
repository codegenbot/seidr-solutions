def mastermind(code, guess):
    black = sum(1 for i in range(4) if code[i] == guess[i])
    white = sum(1 for c in set(guess) if c in code and c != guess[guess.index(c)])
    return f"{black}\n{white}"