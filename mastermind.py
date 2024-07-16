def mastermind():
    code = input("Enter the Mastermind code (4 characters): ")
    guess = input("Enter your guess (4 characters): ")

    blacks = 0
    whites = 0
    code_counts = {}
    for c in code:
        code_counts[c] = code_counts.get(c, 0) + 1

    for c, g in zip(code, guess):
        if c == g:
            blacks += 1
        elif g in code_counts:
            whites += 1

    return str(whites - blacks), str(blacks)