from collections import Counter

def mastermind(code, guess):
    c = list(Counter(code).values())
    g = list(Counter(guess).values())
    
    black = sum(a == b for a, b in zip(c, g))
    white = min(4, sum(min(x, y) for x, y in zip(c, g)) - black)
    
    return str(black) + "\n" + str(white)