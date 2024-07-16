def mastermind():
    code = input("Enter the Mastermind code (4 characters): ")
    guess = input("Enter your guess (4 characters): ")

    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    black_count = 0
    white_count = [0] * 6
    for c, g in zip(code, guess):
        if c == g:
            blacks += 1  
        else:
            white_count[ord(g) - ord("A")] += 1  
    whites = sum(white_count)
    return str(whites - blacks), str(blacks)