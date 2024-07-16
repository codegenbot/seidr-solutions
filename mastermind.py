def mastermind(code, guess):
    white = sum((c1 == c2) for c1, c2 in zip(code, guess))
    
    black = sum(1 for ((c1, c2), (d1, d2)) in zip(zip(code, code), zip(guess, guess)) if c1 == c2 and d1 == d2)
    
    return str(white - black), str(black)