def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(len(code)):
        for j in range(len(guess)):
            if code[i] == guess[j]:
                if i == j:
                    black_pegs += 1
                else:
                    white_pegs += 1
    return (white_pegs, black_pegs)