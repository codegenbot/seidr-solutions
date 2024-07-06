```
def mastermind(code, guess):
    white = 0
    black = 0
    
    for c in set(guess):
        code_index = code.find(c)
        if code_index != -1:
            if code_index == guess.index(c):
                black += 1
                code = code[:code_index] + 'A' * (4-1) 
            else:
                white += 1
                code = code[:code_index] + 'A' * (4-code.index(c)-1) 
                
    return black, white