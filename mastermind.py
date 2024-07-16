def mastermind():
    code = input("Enter the Mastermind code (4 characters): ")
    guess = input("Enter your guess (4 characters): ")

    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    white_counts = [0] * 6
    code_counts = {}
    for c in code:
        code_counts[c] = code_counts.get(c, 0) + 1

    whites = 0
    blacks = 0
    for c in code:
        if c in guess:
            black_count = 0
            if c == guess[guess.index(c)]:
                black_count = 1
            else:
                white_counts[ord(c) - ord("A")] += 1
            blacks += black_count

    return str(sum(1 for x in white_counts if x > 0)), str(blacks)