def mastermind(code, guess):
    # Initialize variables for white and black pegs
    white_pegs = 0
    black_pegs = 0
    
    # Iterate over each character in the code and guess
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess[i] in code:
            white_pegs += 1
    
    # Return the number of white and black pegs
    return (white_pegs, black_pegs)