def mastermind(code, guess):
    # Initialize variables to keep track of white and black pegs
    white_pegs = 0
    black_pegs = 0
  
    # Iterate through each character in the code and guess
    for i in range(len(code)):
        if code[i] == guess[i]:
            # If the characters match, increase black pegs by 1
            black_pegs += 1
        elif code[i] in guess:
            # If the character is in the guess but not in the correct position, increase white pegs by 1
            white_pegs += 1
  
    # Return the number of white and black pegs
    return (white_pegs, black_pegs)