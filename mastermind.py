def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for i in range(len(guess)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(i + 1) in [
            str(x).zfill(2) for x in [i + 1 for c, g in zip(code, guess) if c != g]
        ]:
            white_pegs += 1

    return f"{white_pegs}\n{black_pegs}"