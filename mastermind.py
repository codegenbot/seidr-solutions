def mastermind(code, guess):
    # Initialize variables to keep track of white and black pegs
    white_pegs = 0
    black_pegs = 0

    # Create Counters for both the code and guess strings
    code_counter = Counter(code)
    guess_counter = Counter(guess)

    # Iterate through each character in the code string
    for i, char in enumerate(code):
        # Check if the character is in the guess string and has a non-zero count
        if char in guess_counter and guess_counter[char] > 0:
            # If the character appears in both strings with different frequencies, it's a white peg
            white_pegs += 1
        else:
            # Otherwise, it's a black peg
            black_pegs += 1

    return (white_pegs, black_pegs)