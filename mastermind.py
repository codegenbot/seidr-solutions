def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        else:
            for c in code:
                if c == guess[i]:
                    black_pegs += 1
                    break
            white_pegs += sum(c1 != c2 for c1, c2 in zip(guess, code))