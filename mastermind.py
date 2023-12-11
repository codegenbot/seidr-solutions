def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            if i == guess.index(guess[i]): # check if the character is in the correct position
                black_pegs += 1
            else:
                white_pegs += 1
    return (white_pegs, black_pegs)