def mastermind(code, guess):
    white = 0
    black = 0
    
    for c in code:
        if c == guess[4-guess.index(c)-1]:
            black += 1
        elif c in guess:
            white += 1
            
    return black, white