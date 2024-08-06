Here is the solution:

def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(1 for i,c in enumerate(guess) if c == code[i])
    return str(black), str(white)