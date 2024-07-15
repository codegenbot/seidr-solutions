def mastermind(code, guess):
    code = code.lower()
    guess = guess.lower()
    
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = len(set(guess).intersection(set(code))) - black
    return str(black) + "\n" + str(min(max(0, white - black), 4))