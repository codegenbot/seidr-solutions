def get_mastermind_clue(code, guess):
    black_pegs = 0
    white_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(guess[i]) in str(code):
            white_pegs += 1

    return f"{white_pegs}\n{black_pegs}"