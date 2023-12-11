def mastermind(code, guess):
    # Initialize variables to keep track of white and black pegs
    white_pegs = 0
    black_pegs = 0
    
    # Iterate through each character in the code and guess
    for i in range(len(code)):
        if code[i] == guess[i]:
            # If the characters match, it's a black peg
            black_pegs += 1
        elif code[i] in guess:
            # If the character is in the guess but not in the same position, it's a white peg
            white_pegs += 1
    
    return white_pegs, black_pegs