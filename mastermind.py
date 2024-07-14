def mastermind(code, guess):
    white = sum(1 for c in set(guess) if c in code and code.count(c) > 0)
    black = sum(1 for i in range(4) if code[i] == guess[i])
    return str(black), str(white)