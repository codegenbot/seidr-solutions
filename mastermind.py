Here is the solution:

def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(min(1, code.count(c)) for c in set(guess))
    return str(black), str(white)