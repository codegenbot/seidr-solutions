def mastermind(code, guess):
    # Initialize a dictionary to keep track of characters in the second string that match each character in the first string
    char_count = defaultdict(int)

    # Iterate through each character in the first string and check if it matches any of the characters in the second string
    for i, c in enumerate(code):
        if c == guess[i]:
            # If the characters match, increment the count for black pegs
            char_count[c] += 1
        elif c in guess:
            # If the characters do not match but one of them is a duplicate, increment the count for white pegs
            char_count[c] += 1

    # Return the total number of white and black pegs as a tuple
    return (sum(char_count.values()), len(code) - sum(char_count.values()))