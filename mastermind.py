def mastermind(code, guess):
    white = sum(1 for c, g in zip(guess, code) if c == g)
    black = sum(1 for c, g in zip(guess, code) if c == g) - white
    return f"{black}\n{white}"