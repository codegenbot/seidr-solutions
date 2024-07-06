def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(len(guess)):
        if guess[i] == code[i]:
            white_pegs += 1
        else:
            for j in range(len(code)):
                if code[j] == guess[i]:
                    black_pegs += 1
                    break
    return (white_pegs, black_pegs)