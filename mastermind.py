Here is the solution:

def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    black = sum((c1 == c2) and (i, j) != (k, l) for i, c1 in enumerate(guess) 
                for j, c2 in enumerate(code) for k, c3 in enumerate(code) for l, c4 in enumerate(code) if c1 == c3 or c2 == c4)
    return black, white