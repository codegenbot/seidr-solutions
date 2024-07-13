Here is the solution:

def mastermind(code, guess):
    white = sum(1 for a, b in zip(guess, code) if a == b)
    black = 4 - sum(1 for x in [code.count(y) for y in set(guess)]) + white
    return str(black), str(white)