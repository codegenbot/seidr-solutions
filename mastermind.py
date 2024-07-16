def mastermind():
    code = input("Enter the Mastermind code (4 characters): ")
    guess = input("Enter your guess (4 characters): ")

    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    white_counts = [0] * 6
    code_counts = {}
    for c in code:
        code_counts[c] = code_counts.get(c, 0) + 1

    black_count = 0
    for c, g in zip(code, guess):
        if c == g:
            black_count += 1
        else:
            white_counts[ord(c) - ord("A")] -= 1

    whites = sum(0 if count > 0 else 1 for count in code_counts.values())
    return str(whites - blacks), str(blacks)