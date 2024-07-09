def mastermind(code, guess):
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    black_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)