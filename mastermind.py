def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_count[ord(code[i]) - ord("B")] += 1
            guess_count[ord(guess[i]) - ord("B")] += 1

    for i in range(6):
        white_pegs += min(code_count[i], guess_count[i])

    return str(white_pegs) + "\n" + str(black_pegs)