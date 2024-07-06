def mastermind(code, guess):
    # Convert input to 4-character string consisting of only '0', '1', '2', '3', '4', and '5'
    code = re.sub(r"[^0-5]", "", code)
    guess = re.sub(r"[^0-5]", "", guess)

    # Initialize variables to keep track of white and black pegs
    white_pegs = 0
    black_pegs = 0

    # Iterate through each character in the code and guess
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1

    # Return the number of white and black pegs
    return (white_pegs, black_pegs)