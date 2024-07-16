def mastermind(code, guess):
    white = sum(c in guess for c in code if code.index(c) != guess.index(c))
    black = sum(1 for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess)) 
                if c1 == c2)
    return str(black) + "\n" + str(4 - black)