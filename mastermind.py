def mastermind(code, guess):
    code = code.lower()
    guess = guess.lower()
    
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = len([x for x in guess if x in code]) - black
    return str(min(max(black, 0), 4)) + "\n" + str(min(max(white, 0), 4))