def mastermind(code, guess):
    white = sum(c in code for c in guess)
    black = sum(1 for i, c in enumerate(guess) if c == code[i])
    return str(white), str(black)