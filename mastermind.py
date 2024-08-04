def get_pegs(code, guess):
    black_pegs = 0
    white_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(guess[i]) in code:
            white_pegs += 1
    return f"{black_pegs}\n{4 - black_pegs}"