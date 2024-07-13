Here is the Python solution:

def mastermind(code, guess):
    white = sum(a == b for a, b in zip(guess, code))
    black = sum(sum(1 for c in guess if c == d) for d in set(code)) - white
    return str(black), str(white)