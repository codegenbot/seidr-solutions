def mastermind():
    white_pegs = 0
    black_pegs = 0

    # Read input from the user
    code, guess = input("Enter the Mastermind code and guess: ").split()

    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1

    return (white_pegs, black_pegs)