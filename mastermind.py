def get_clue(code, guess):
    black_pegs = 0
    white_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess[i] in code:
            white_pegs += 1
    return white_pegs, black_pegs