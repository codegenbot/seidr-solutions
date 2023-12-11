def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    
    # check for black pegs
    for i in range(len(guess)):
        if code[i] == guess[i]:
            black_pegs += 1
        
    # check for white pegs
    for i in range(len(guess)):
        if code[i] != guess[i] and guess[i] in code:
            white_pegs += 1
    
    return black_pegs, white_pegs