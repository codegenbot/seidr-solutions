def mastermind():
    code = [c.upper() for c in input("Enter the Mastermind code (4 characters): ")]
    guess = [c.upper() for c in input("Enter your guess (4 characters): ")]

    black_count = 0
    white_counts = [0] * 6
    for c, g in zip(code, guess):
        if c == g:
            black_count += 1
        elif g in code:
            white_counts[ord(g) - ord("A")] += 1

    return str(sum(1 for x in white_counts if x > 0)), str(black_count)