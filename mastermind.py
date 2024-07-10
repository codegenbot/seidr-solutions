Here is the solution:

def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum((c1,c2) == (c3,c4) for ((c1,c2), (c3,c4)) in zip(code,guess))
    return str(white) + "\n" + str(black)