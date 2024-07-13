def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    code_count = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_count[ord(guess[i]) - ord("A")] < 1:
            code_count[ord(guess[i]) - ord("A")] += 1
        else:
            white_pegs += 1

    return str(white_pegs) + "\n" + str(black_pegs)