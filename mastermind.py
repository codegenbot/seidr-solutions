def get_mastermind_clue(code, guess):
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess.count(guess[i]) == 1:
            white_pegs += 1

    return str(white_pegs) + "\n" + str(black_pegs)