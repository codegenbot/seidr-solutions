Here is the solution:

def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = 0 if set(code) != set(guess) else len([i for i in range(len(code)) if code[i] == guess[i]])
    return str(white), str(black)