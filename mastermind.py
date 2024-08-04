Here is the solution:

def mastermind(code, guess):
    white = sum(c in guess for c in code) - 4
    black = sum(1 for i in range(4) if code[i] == guess[i])
    return str(black) + "\n" + str(white)