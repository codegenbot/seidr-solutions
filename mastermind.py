def mastermind(code, guess):
    # Count the number of occurrences of each character in the guess string
    guess_count = Counter(guess)

    # Iterate over the characters in the code string and add up the counts for each character that is also present in the guess string
    white_pegs, black_pegs = 0, 0
    for c in code:
        if c in guess_count:
            count = guess_count[c]
            if count > 0:
                white_pegs += 1
                black_pegs += 1

    return (white_pegs, black_pegs)