def mastermind(code, guess):
    # Check if code and guess contain only digits '0' through '5'
    if not (all(ch in "012345" for ch in code) and all(ch in "012345" for ch in guess)):
        return "Invalid input! Please enter a 4-character string consisting only of the characters '0', '1', '2', '3', '4', and '5'."

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
    return (white_pegs, black_pegs) if white_pegs + black_pegs == 1 else (0, 0)