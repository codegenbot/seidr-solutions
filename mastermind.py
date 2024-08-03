Here is the solution:

def mastermind(code, guess):
    correct = [c1 == c2 for c1,c2 in zip(code, guess)]
    white = sum(1 for c1,c2 in zip(code, guess) if c1==c2 and not correct.pop(0))
    black = sum(correct)
    return str(black), str(white)