def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif ord(guess[i]) - ord("A") < 6 and [ord(c) - ord("A")] > 0:
            white_pegs += 1
            [ord(c) - ord("A")] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)