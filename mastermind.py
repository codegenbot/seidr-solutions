Here is the solution:

def mastermind(code, guess):
    white = sum(c in code for c in guess)
    black = sum((c1 == c2) and (i1//4 == i2//4) for ((i1,c1), (i2,c2)) in zip(enumerate(code), enumerate(guess)))
    return str(black) + '\n' + str(white)