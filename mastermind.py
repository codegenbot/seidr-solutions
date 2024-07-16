def mastermind(code, guess):
    black_count = sum([a == b for a,b in zip(guess, code)])
    white_count = 4 - black_count
    return str(black_count), str(white_count)