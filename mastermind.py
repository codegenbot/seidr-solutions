def get_clue(code, guess):
    # Initialize variables to keep track of black pegs and white pegs
    black_pegs = 0
    white_pegs = 0
    
    # Iterate over the characters in the code and guess
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess[i] in code:
            white_pegs += 1
    
    # Return the number of black pegs and white pegs
    return (black_pegs, white_pegs)