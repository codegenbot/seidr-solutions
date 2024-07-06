def mastermind(code, guess):
    # Initialize variables to keep track of white and black pegs
    white_pegs = 0
    black_pegs = 0

    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] != guess[i]:
            white_pegs += 1

    return (white_pegs, black_pegs)