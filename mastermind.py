def count_pegs(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(guess[i]) in code:
            white_pegs += 1
    return black_pegs, white_pegs