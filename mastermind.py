def mastermind(code, guess):
    white = 0
    black = 0
    
    code_counts = {c: code.count(c) for c in set(code)}
    
    for g in guess:
        if g in code_counts and code_counts[g] > 0:
            if code.index(g) == guess.index(g):
                black += 1
                code_counts[g] -= 1
            else:
                white += 1
                code_counts[g] -= 1
                
    return black, white