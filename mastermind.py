def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for i in range(len(guess)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess[i] in code:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)