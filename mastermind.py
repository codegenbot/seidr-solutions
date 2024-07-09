def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code.count(guess[i]) > 0:
            white_pegs += 1

    return black_pegs, white_pegs