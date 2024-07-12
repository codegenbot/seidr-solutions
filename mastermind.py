def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b)
    black = len([a for a in range(len(code)) if code[a] == guess[a]])
    return str(black), str(4 - black + white)