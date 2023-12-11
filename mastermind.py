def mastermind(code, guess):
    # Initialize variables to keep track of white and black pegs
    white_pegs = 0
    black_pegs = 0
    
    # Iterate over the characters in the code and guess
    for i in range(len(code)):
        if code[i] == guess[i]:
            # If the characters match, it's a black peg
            black_pegs += 1
        elif guess[i] in code:
            # If the character in the guess is in the code but not in the same position, it's a white peg
            white_pegs += 1
    
    # Return the number of white and black pegs
    return (white_pegs, black_pegs)