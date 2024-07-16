def mastermind():
    code = input("Enter the Mastermind code (4 characters): ")
    guess = input("Enter your guess (4 characters): ")

    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    white_counts = [0] * 6
    code_counts = {}
    for c in code:
        code_counts[c] = code_counts.get(c, 0) + 1

    for c in code:
        if c in guess:
            white_counts[ord(c) - ord("A")] += 1

    whites = sum(1 for c in range(6) if code_counts.get(chr(c + ord("A")), 0) > 0 and white_counts[c] == 1)
    return str(whites), str(blacks)